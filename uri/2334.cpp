#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned long long int patinhos;
    while(cin >> patinhos)
    {
        if(patinhos == -1ll) 
		break;
        if(patinhos == 0ll) 
		cout << "0" << endl;
        else 
		cout << patinhos - 1ll << endl;;
    }
    return 0;
}