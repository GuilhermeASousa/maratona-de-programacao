#include <iostream>    
#include <algorithm>    
#include <vector>

using namespace std;

int main(){
	int N, i;
	string cod_livro;
	vector<string> biblioteca; 
	while (cin >> N){
		for (i = 0; i < N; i++){
			cin >> cod_livro;
			biblioteca.push_back (cod_livro);
		}
		sort (biblioteca.begin(), biblioteca.end());
		for (vector<string>::iterator it=biblioteca.begin(); it!=biblioteca.end(); ++it)
			cout << *it << endl;
		biblioteca.clear();
	}
	return 0;
}       