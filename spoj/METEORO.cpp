#include <iostream>
using namespace std;

int main() {
    int x1, x2, y1, y2, qt_meteoritos, x, y, cont, testeId, i;
    testeId = 1;
    while (true){
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            break;
        cin >> qt_meteoritos;
        cont = 0;
        for(i = 0; i < qt_meteoritos; i++){
            cin >> x >> y;
            if (x <= max(x1, x2) && x >= min(x1, x2) && y <= max(y1, y2) && y >= min(y1, y2))
                cont++;
        }
        cout << "Teste " << testeId << endl;
        cout << cont << endl << endl;
        testeId++;
    }
	return 0;
}
