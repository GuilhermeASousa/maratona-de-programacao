#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, k, i, j;
    while (true) {
    	cin >> n >> k;
    	if (n == 0 && k == 0)
    		break;
    	for (i = 0; i < k - 1; i++) {
    		cout << i + 1;
    		if (i != n - 1)
    			cout << " ";
    		else
    			cout << endl;
    	}
    	for (j = n; j > i; j--) {
    		cout << j;
    		if (j != i+1)
    			cout << " ";
    		else
    			cout << endl;
    	}
    }
    return 0;
}