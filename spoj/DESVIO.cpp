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

void addAresta(grafo &pais, int origem, int destino, int peso){
	Aresta aresta;
	aresta.destino = destino;
	aresta.peso = peso;
	pais[origem].push_back(aresta);
}

int dijkstra(grafo pais, int origem, int destino) {
    vector<int> distancia_minima(pais.size(), INT_MAX);
    distancia_minima[origem] = 0;
    set< pair<int,int> > vertices_ativos;
    int vertice_atual;
    vertices_ativos.insert({0,origem});  
    while (!vertices_ativos.empty()) {
        vertice_atual = vertices_ativos.begin()->second;
        if (vertice_atual == destino) return distancia_minima[vertice_atual];
        vertices_ativos.erase(vertices_ativos.begin());
        for (auto aresta : pais[vertice_atual]) 
            if (distancia_minima[aresta.destino] > distancia_minima[vertice_atual] + aresta.peso) {
                vertices_ativos.erase({distancia_minima[aresta.destino], aresta.destino});
                distancia_minima[aresta.destino] = distancia_minima[vertice_atual] + aresta.peso;
                vertices_ativos.insert({distancia_minima[aresta.destino], aresta.destino});
            }
    }
    return INT_MAX;
}

int main() {
	int qt_cidades, qt_estradas, qt_cidades_rota, cidade_conserto, u, v, p, i;
	grafo pais;
	while (true) {
		cin >> qt_cidades >> qt_estradas >> qt_cidades_rota >> cidade_conserto;
		if (qt_cidades == 0 && qt_estradas == 0 && qt_cidades_rota == 0 && cidade_conserto == 0)
			break;
		pais.clear();
		pais.resize(qt_cidades);
		for (i = 0; i < qt_estradas; i++) {
			cin >> u >> v >> p;
			if (u < qt_cidades_rota && v < qt_cidades_rota){
				if (u == v-1 || v == u-1){
					if (u == v-1){
						addAresta(pais, u, v, p);
					}
					if (v == u-1){
						addAresta(pais, v, u, p);
					}
				}
			}
			else {
				if (u < qt_cidades_rota && v >= qt_cidades_rota){
					addAresta(pais, v, u, p);
				}
				else if (v < qt_cidades_rota && u >= qt_cidades_rota){
					addAresta(pais, u, v, p);
				}
				else if (u >= qt_cidades_rota && v >= qt_cidades_rota){
					addAresta(pais, u, v, p);
					addAresta(pais, v, u, p);
				}
			}
		}
		cout << dijkstra (pais, cidade_conserto, qt_cidades_rota-1) << endl;
	}
	return 0;
}