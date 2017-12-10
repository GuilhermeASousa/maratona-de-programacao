#include <iostream>
#include <vector>

using namespace std; 

int knapsack(int capacidade_lab, vector<int> pesos, vector<int> doces, int qt_analogimons)
{
    int i, j;
    int Matriz[qt_analogimons + 1][capacidade_lab + 1];

    for(i = 0; i <= capacidade_lab; i++)
        Matriz[0][i] = 0;
    for(j = 1; j <= qt_analogimons; j++)
        Matriz[j][0] = 0;

    for(j = 1; j <= qt_analogimons; j++)
    {
        for(i = 1; i <= capacidade_lab; i++)
        {   
            if(pesos[j - 1] <= i)
            {
                if((doces[j - 1] + Matriz[j - 1][i - pesos[j - 1]]) > Matriz[j - 1][i])
                    Matriz[j][i] = doces[j - 1] + Matriz[j - 1][i - pesos[j - 1]];
                else
                    Matriz[j][i] = Matriz[j - 1][i];
            }
            else
                Matriz[j][i] = Matriz[j - 1][i]; 
        }
    }

    return Matriz[qt_analogimons][capacidade_lab];
}

int main() {
    int qt_analogimons, capacidade_lab, d, p, j;
    vector<int> doces, pesos;
    while (cin >> qt_analogimons >> capacidade_lab) {
        doces.clear();
        pesos.clear();
        for (j = 0; j < qt_analogimons; j++) {
            cin >> d;
            doces.push_back(d);
        }
        for (j = 0; j < qt_analogimons; j++) {
            cin >> p;
            pesos.push_back(p);
        }
        cout << knapsack(capacidade_lab, pesos, doces, qt_analogimons) << endl;
    }
	return 0;
}
