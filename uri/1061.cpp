#include <iostream>
 
using namespace std;

int min_em_seg = 60;
int hr_em_seg = 3600;
int dia_em_seg = 86400;
 
void converteSegundos (int &dias, int &horas, int &minutos, int &segundos) {
	while (segundos >= 60) {
		if (segundos >= dia_em_seg){
			dias++;
			segundos -= dia_em_seg;
		}
		else if (segundos >= hr_em_seg){
			horas++;
			segundos -= hr_em_seg;
		}
		else if (segundos >= min_em_seg){
			minutos++;
			segundos -= min_em_seg;
		}
	}
}

int main() {
	int dia1, hora1, minuto1, segundo1, dia2, hora2, minuto2, segundo2, dias, horas, minutos, segundos;
	string aux;
	cin >> aux >> dia1;
	cin >> hora1 >> aux >> minuto1 >> aux >> segundo1;
	cin >> aux >> dia2;
	cin >> hora2 >> aux >> minuto2 >> aux >> segundo2;
	dias = 0;
	horas = 0;
	minutos = 0;
	segundos = 0;
	if (dia1 == dia2) {
		segundos = ((hora2 * 60 * 60) + (minuto2 * 60) + segundo2) - ((hora1 * 60 * 60) + (minuto1 * 60) + segundo1);
		converteSegundos (dias, horas, minutos, segundos);	
	}
	else {
		segundos = (dia_em_seg - ((hora1 * 60 * 60) + (minuto1 * 60) + segundo1)) + ((hora2 * 60 * 60) + (minuto2 * 60) + segundo2);
		dia1++;
		if (dia1 != dia2)
			segundos += (dia2 - dia1) * dia_em_seg;
		converteSegundos (dias, horas, minutos, segundos);
	}
	cout << dias << " dia(s)" << endl;
	cout << horas << " hora(s)" << endl;
	cout << minutos << " minuto(s)" << endl;
	cout << segundos << " segundo(s)" << endl;
	return 0;
}