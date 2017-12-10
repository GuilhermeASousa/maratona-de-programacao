#include <iostream>
 
using namespace std;
 
int main() {
	int calendario[12] = {31,29,31,30,31,30,31,31,30,31,30,25}, dia, mes, total_dias, i;
	while (cin >> mes >> dia){
		total_dias = calendario[mes - 1] - dia;
		for (i = mes; i < 12; i++){
			total_dias += calendario[i];
		}
		if (mes == 12 && dia > 25)
			cout << "Ja passou!" << endl;
		else if (total_dias == 0)
			cout << "E natal!" << endl;
		else if (total_dias == 1)
			cout << "E vespera de natal!" << endl;
		else
			cout << "Faltam " << total_dias << " dias para o natal!" << endl;	
	}
	return 0;
}