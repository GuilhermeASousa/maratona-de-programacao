#include <iostream>
#include <iomanip> 
 
using namespace std;
 
int main() {
	double nota, media;
	int repeticao, i;
	repeticao = 1;
	i = 0;
	media = 0;
	while (repeticao == 1){
		while (i < 2){
			cin >> nota;
			if (nota < 0 || nota > 10)
				cout << "nota invalida" << endl;
			else {
				media += nota;
				i++;
			}
		}
		cout << fixed;
		cout << "media = " << setprecision(2) << media/2.0 << endl;
		i = 0;
		media = 0;
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> repeticao;
		while (repeticao != 1 && repeticao != 2){
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> repeticao;
		}
	}
	return 0;
}