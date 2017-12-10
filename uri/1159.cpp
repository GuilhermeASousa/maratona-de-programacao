#include <iostream>
 
using namespace std;
 
int main() {
 
    int X, i, total;
    cin >> X;
    while (X != 0){
        total = 0;
        for (i = 0; i < 5; i++){
            if (X % 2 == 0){
                total += X;
                X = X + 2;
            }
            else{
                total = X + 1;
                X = X + 3;
            }
        }
        cout << total << endl;
        cin >> X;
    }
    return 0;
}