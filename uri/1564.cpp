#include <iostream>
 
using namespace std;
 
int main() {
	int reclamacoes;
	while (cin >>  reclamacoes){
		if (reclamacoes == 0)
			cout << "vai ter copa!" << endl;
		else
			cout << "vai ter duas!" << endl;
	}
	return 0;
}