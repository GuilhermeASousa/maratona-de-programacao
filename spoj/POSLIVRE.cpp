#include <iostream>
#include <algorithm> 

using namespace std;
int main() {
	int altura, largura, num_sub_partes, matriz[501][501], contador, x1, y1, x2, y2, i, j, k;
	cin >> largura >> altura >> num_sub_partes;
	while (largura != 0 || altura != 0 || num_sub_partes != 0) {

		for(i = 1; i <= altura; i++)
        	for(j = 1; j <= largura; j++)
            	matriz[i][j] = 0;

        contador = 0;

		for (i = 0; i < num_sub_partes; i++) {
			cin >> x1 >> y1 >> x2 >> y2;
			for (j = min(y1,y2); j <= max(y1,y2); j++) {
				for (k = min(x1,x2); k <= max(x1,x2); k++)
					matriz[j][k] = 1;
			}
		}

		for (j = 1; j <= altura; j++) {
			for (k = 1; k <= largura; k++)
				if (matriz[j][k] == 0)
					contador++;
		}

    	if (contador == 0) 
			cout << "There is no empty spots." << endl;
		else if (contador == 1)
			cout << "There is one empty spot." << endl;
		else
			cout << "There are " << contador << " empty spots." << endl;

		cin >> largura >> altura >> num_sub_partes;
	}
	return 0;
}