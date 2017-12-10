#include <iostream>
 
using namespace std;
 
int hora2minuto(int hora, int minuto){
	return ((hora*60)+minuto);
}

void minuto2hora(int &hora_duracao, int &minuto_duracao, int minutos){
	while (minutos > 60){
		hora_duracao++;
		minutos -= 60;
	}
	minuto_duracao = minutos;
}

void virandoODia (int &hora_duracao, int &minuto_duracao, int minutos){
	while (minutos > 60){
		hora_duracao--;
		minutos -= 60;
	}
	minuto_duracao -= minutos;
}

int main() {
	int inicio, fim, hora_inicial, minuto_inicial, hora_final, minuto_final, hora_duracao, minuto_duracao;
	cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;
	inicio = hora2minuto(hora_inicial, minuto_inicial);
	fim = hora2minuto(hora_final, minuto_final);
	hora_duracao = 0; 
	minuto_duracao = 0;
	if (inicio < fim)
		minuto2hora(hora_duracao, minuto_duracao, fim - inicio);
	else if (inicio > fim){
		hora_duracao = 23;
	        minuto_duracao = 60;
		virandoODia (hora_duracao, minuto_duracao, inicio - fim);
	}
	else
		hora_duracao = 24;
	cout <<	"O JOGO DUROU " << hora_duracao << " HORA(S) E " << minuto_duracao << " MINUTO(S)" << endl;
	return 0;
}