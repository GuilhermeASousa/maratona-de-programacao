#include <iostream>
#include <vector>
#include <limits.h>
#include <set>
using namespace std;

struct Aresta { 
	int destino, peso; 
};

typedef vector<Aresta> vetor;
typedef vector<vetor> grafo;

void addAresta(grafo &pontes, int origem, int destino, int peso){
	Aresta aresta;
	aresta.destino = destino;
	aresta.peso = peso;
	pontes[origem].push_back(aresta);
}

int dijkstra(grafo pontes, int origem, int destino) {
    vector<int> distancia_minima(pontes.size(), INT_MAX);
    distancia_minima[origem] = 0;
    set< pair<int,int> > vertices_ativos;
    int vertice_atual;
    vertices_ativos.insert({0,origem});  
    while (!vertices_ativos.empty()) {
        vertice_atual = vertices_ativos.begin()->second;
        if (vertice_atual == destino) return distancia_minima[vertice_atual];
        vertices_ativos.erase(vertices_ativos.begin());
        for (auto aresta : pontes[vertice_atual]) 
            if (distancia_minima[aresta.destino] > distancia_minima[vertice_atual] + aresta.peso) {
                vertices_ativos.erase({distancia_minima[aresta.destino], aresta.destino});
                distancia_minima[aresta.destino] = distancia_minima[vertice_atual] + aresta.peso;
                vertices_ativos.insert({distancia_minima[aresta.destino], aresta.destino});
            }
    }
    return INT_MAX;
}

int main() {
	int qt_pilares, qt_pontes, s, t, b, i;
	grafo pontes;
	cin >> qt_pilares >> qt_pontes;
	pontes.clear();
	pontes.resize(qt_pilares+2);
	for (i = 0; i < qt_pontes; i++) {
		cin >> s >> t >> b;
		addAresta(pontes, s, t, b);
		addAresta(pontes, t, s, b);
	}
	cout << dijkstra(pontes, 0, qt_pilares+1) << endl;
	return 0;
}