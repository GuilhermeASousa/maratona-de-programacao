#include <iostream>

using namespace std;
int main() {
	int num_atacantes, num_defensores, menor_dist_atacante, ultimo_defensor, penultimo_defensor, i, dist;
	cin >> num_atacantes >> num_defensores;
	while (num_atacantes != 0 && num_defensores != 0) {
		menor_dist_atacante = ultimo_defensor = penultimo_defensor = 10001;
		for (i = 0; i < num_atacantes; i++) {
			cin >> dist;
			if (dist < menor_dist_atacante)
				menor_dist_atacante = dist; 
		}
		for (i = 0; i < num_defensores; i++) {
			cin >> dist;
			if (dist < ultimo_defensor) {
				penultimo_defensor = ultimo_defensor;
				ultimo_defensor = dist;
			}
			else if (dist < penultimo_defensor)
				penultimo_defensor = dist;
		}
		if ((menor_dist_atacante < penultimo_defensor))
			cout << "Y" << endl;
		else
			cout << "N" << endl;
		cin >> num_atacantes >> num_defensores;
	}
	return 0;
}