#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	int N, i;
	string A, B;
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> A >> B;
		if (A.size() < B.size())
			cout << "nao encaixa" << endl;		
  		else if (A.compare(A.size() - B.size(), B.size(), B) == 0)
			cout << "encaixa" << endl;
		else
			cout << "nao encaixa" << endl;
	} 
	return 0;
}