#include <iostream>
 
using namespace std;
 
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if ((A > B && C >= B) ||
	    (B > A && C > B && C - B >= B - A) ||
	    (A > B && B > C && B - C < A - B) ||
	    (A == B && C > B))
		cout << ":)" << endl;
	else
		cout << ":(" << endl;
	return 0;
}