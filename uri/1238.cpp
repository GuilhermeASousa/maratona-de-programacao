#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	string A, B, combinada;
	int N, i, j;
	cin >> N;
	for (i = 0; i < N; i++){
		cin >> A >> B;
		if (A.length() > B.length()){
			j = 0;
			while (j < B.length()){
				combinada.append(A,j,1); 
				combinada.append(B,j,1);
				j++;
			}
			combinada.append(A,j,A.length()); 
		}
		else{
			j = 0;
			while (j < A.length()){
				combinada.append(A,j,1); 
				combinada.append(B,j,1);
				j++;
			}
			combinada.append(B,j,B.length()); 
		}
		cout << combinada << endl;
		combinada.erase (combinada.begin(),combinada.end());  	
	}
	return 0;
}