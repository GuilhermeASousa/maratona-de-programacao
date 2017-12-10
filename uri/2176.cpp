#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
 	int i, num_uns;
    string mensagem;
    cin >> mensagem;
    num_uns = 0;
    for (i = 0; i < mensagem.length(); i++) {
    	if (mensagem[i] == '1')
    		num_uns++;
    }
    if (num_uns % 2 == 0)
    	mensagem = mensagem + '0';
    else
    	mensagem = mensagem + '1';
 
 	cout << mensagem << endl;
 	
    return 0;
}