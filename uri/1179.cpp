#include <iostream>
#include <vector>
 
using namespace std;

int main() {
	vector<int> par;
	vector<int> impar;
	vector<int>::iterator it;
	int i, valor, j;
	for (i = 0; i < 15; i++){
		cin >> valor;
		if (valor % 2 == 0){
			par.push_back (valor);
			if (par.size() > 4){
				j = 0;
				for (it = par.begin(); it != par.end(); ++it){
    					cout << "par["<< j <<"] = " << *it << endl;
					j++;
				}
				par.erase (par.begin(),par.end());
			}
		}
		else{
			impar.push_back (valor);
			if (impar.size() > 4){
				j = 0;
				for (it = impar.begin(); it != impar.end(); ++it){
    					cout << "impar["<< j <<"] = " << *it << endl;
					j++;
				}
				impar.erase (impar.begin(),impar.end());
			}
		}
	}
	j = 0;
	for (it = impar.begin(); it != impar.end(); ++it){
    		cout << "impar["<< j <<"] = " << *it << endl;
		j++;
	}
	j = 0;
	for (it = par.begin(); it != par.end(); ++it){
    		cout << "par["<< j <<"] = " << *it << endl;
		j++;
	}
	return 0;
}