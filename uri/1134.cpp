#include <iostream>
 
using namespace std;
 
int main() {
 
	int COD, ALCOOL, GASOLINA, DIESEL;
	cin >> COD;
	ALCOOL = 0;
	GASOLINA = 0;
	DIESEL = 0;
	while (COD != 4)
	{
		if (COD == 1)
			ALCOOL++;
		else if (COD == 2)
			GASOLINA++;
		else if (COD == 3)
			DIESEL++;
		cin >> COD;
	}
	cout << "MUITO OBRIGADO" << endl << "Alcool: " << ALCOOL << endl << "Gasolina: " << GASOLINA << endl << "Diesel: " << DIESEL << endl;

	return 0;
}