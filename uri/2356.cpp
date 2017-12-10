#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string dna, seq_codigo;
    size_t found;
    while (cin >> dna >> seq_codigo) {
    	if (seq_codigo.size() > dna.size())
    		cout << "Nao resistente" << endl;
    	else {
    		found = dna.find(seq_codigo);
    		if (found != string::npos)
    			cout << "Resistente" << endl;
    		else
    			cout << "Nao resistente" << endl;
    	}
    }
    return 0;
}