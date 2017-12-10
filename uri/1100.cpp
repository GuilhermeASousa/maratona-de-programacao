#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;

int l, c;

void converteQuadrados(string a, string b, int &linOrigem, int &colOrigem, int &linDestino, int &colDestino) {
	colOrigem = (int)a[0] - 97;
	linOrigem = (int)a[1] - 49;
	colDestino = (int)b[0] - 97;
	linDestino = (int)b[1] - 49;
}

int calcDist(int linOrigem, int colOrigem, int linDestino, int colDestino) {
	int difLinhas, difCols, dist;

	if(linOrigem == l || linDestino == l)
	{
		linOrigem = l - linOrigem;
		linDestino = l - linDestino;
	}

	if(colOrigem == c || colDestino == c)
	{
		colOrigem = c - colOrigem;
		colDestino = c - colDestino;
	}

	difLinhas = abs(linOrigem - linDestino);
	difCols = abs(colOrigem - colDestino);

	if((linOrigem == 0 && colOrigem == 0) || (linDestino == 0 && colDestino == 0)) {
		if(difLinhas == 1 && difCols == 1) return 4;
		if(difLinhas == 0 && difCols == 3 && c == 4) return 5;
		if(difLinhas == 3 && difCols == 0 && l == 4) return 5;
	}

	if (difLinhas == 2 && difCols == 2) return 4;
	if (difLinhas == 1 && difCols == 0) return 3;
	if (difLinhas == 0 && difCols == 1) return 3;

	dist = max((difLinhas + 1) / 2, (difCols + 1) / 2);
	dist = max(dist, (difLinhas + difCols + 2) / 3);
	
	if((dist % 2) != (difLinhas + difCols) % 2) dist++;
	return dist;
}

int main() {
 	int linOrigem, colOrigem, linDestino, colDestino;
 	string a, b;
 	l = 7;
 	c = 7;
 	while(cin >> a >> b) {
 		converteQuadrados(a, b, linOrigem, colOrigem, linDestino, colDestino);
 		cout << "To get from " << a << " to " << b << " takes " << calcDist(linOrigem, colOrigem, linDestino, colDestino) << " knight moves." << endl;
 	}
    return 0;
}