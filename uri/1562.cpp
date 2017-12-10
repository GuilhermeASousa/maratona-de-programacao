#include <iostream>
#include <vector>
#include <queue>
#include <stack>
 
using namespace std;

typedef vector<int> vetor;
typedef vector<vetor> grafo;

void dfs(int origem, int qt_especies, grafo especies) {
  int i, cont;
  stack<int> pilha;
  bool visitados[qt_especies];
 
  for(int i = 0; i < qt_especies; i++)
    visitados[i] = false;
 
  cont = 0;

  while(true) {
    if(!visitados[origem]) {
      cont++;
      visitados[origem] = true;
      pilha.push(origem);
    }
 
    bool achou = false;
 
    for(i = 0; i < especies[origem].size(); i++) {
      if(!visitados[especies[origem][i]]) {
        achou = true;
        break;
      }
    }
 
    if(achou)
      origem = especies[origem][i];
    else {
      pilha.pop();
      if(pilha.empty())
        break;
      origem = pilha.top();
    }
  }
  cout << cont << endl;
}

int main() {
  int qt_especies, qt_informacoes, a, b, minha_especie, i;
  grafo especies;
  while (cin >> qt_especies >> qt_informacoes) {
    especies.clear();
    especies.resize(qt_especies);
    for (i = 0; i < qt_informacoes; i++) {
      cin >> a >> b;
      a--;b--;
      especies[a].push_back(b);
      especies[b].push_back(a);
    }
    cin >> minha_especie;
    minha_especie--;
    dfs(minha_especie, qt_especies, especies);
  }
  return 0;
}