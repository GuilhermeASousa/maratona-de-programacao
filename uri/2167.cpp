#include <iostream>
 
using namespace std;
 
int main() {
 
    int medidas_velocidade, rpm, rpm_anterior, i, flag;
    cin >> medidas_velocidade;
    cin >> rpm_anterior;
    flag = 0;
 	
 	for (i = 1; i < medidas_velocidade; i++) {
 		cin >> rpm;
 		if (rpm < rpm_anterior) {
 			cout << ++i << endl;
 			flag = 1;
 			break;
 		}
 		rpm_anterior = rpm;

 	}

 	if (flag == 0)
 		cout << "0" << endl;	

    return 0;
}