#include <iostream>
 
using namespace std;

int main() {
 	int N, QTD, TOT, CL, RT, SP;
	double PC, AUX;
	char TIP;
	cin >> N;
	TOT = 0;
	CL = 0;
	RT = 0;
	SP = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> QTD >> TIP;
		TOT += QTD;
		if (TIP == 'C') 
			CL += QTD;
		else if (TIP == 'R')
			RT += QTD;
		else if (TIP == 'S')
			SP += QTD;
	}
	cout << "Total: " << TOT << " cobaias" << endl;
	cout << "Total de coelhos: " << CL << endl;
	cout << "Total de ratos: " << RT << endl;
	cout << "Total de sapos: " << SP << endl;
	cout << fixed;
	cout.precision(2);
	AUX = CL;
	PC = (AUX * 100) / TOT;
	cout << "Percentual de coelhos: " << PC << " %" << endl;
	AUX = RT;
	PC = (AUX * 100) / TOT;
	cout << "Percentual de ratos: " << PC << " %" << endl;
	AUX = SP;
	PC = (AUX * 100) / TOT;
	cout << "Percentual de sapos: " << PC << " %" << endl;
    return 0;
}