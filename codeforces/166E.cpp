#include <iostream>

using namespace std; 

const int mod = 1000000007;

int main(){
	long long int n, resposta;
	bool flag;
	cin >> n;
	if (n == 1) 
		resposta = 0;
	else if (n == 2) 
		resposta = 3;
	else {
		flag = false;
		resposta = 3;
		while (n > 2){
			n--;
			if (!flag) {
				resposta = ((resposta % mod) * (3 % mod) % mod - 3) % mod;
				flag = true;
			}
			else {
				resposta = (((resposta % mod) * (3 % mod)) % mod + 3) % mod;
				flag = false;
			}
		}
	}
	cout << resposta % mod << endl;
	return 0;
}