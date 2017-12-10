#include <iostream>
#include <vector>

using namespace std; 

int trataCaracteristica2 (vector<int> caracteristica2) {
    int i, value;
    value = 1;
    for (i = 0; i < caracteristica2.size(); i++) {
        if (caracteristica2[i] == 0) {
            value = 0;
            break;
        }
    }
    return value;
}

int trataCaracteristica3 (vector<int> caracteristica3) {
    int i, value;
    value = 1;
    for (i = 0; i < caracteristica3.size(); i++) {
        if (caracteristica3[i] == 1) {
            value = 0;
            break;
        }
    }
    return value;
}

int main() {
    int qt_participantes, qt_problemas, p, qt_problemas_resolvidos, i, j;
    int caracteristica1, caracteristica4;
    vector<int> caracteristica2, caracteristica3; 
    while (true) {
        cin >> qt_participantes >> qt_problemas;
        if (qt_participantes == 0 && qt_problemas == 0)
            break;
        caracteristica1 = caracteristica4 = 1;
        caracteristica2.clear();
        caracteristica3.clear();
        caracteristica2.resize(qt_problemas, 0);
        caracteristica3.resize(qt_problemas, 1);
        for (i = 0; i < qt_participantes; i++) {
            qt_problemas_resolvidos = 0;
            for (j = 0; j < qt_problemas; j++) {
                cin >> p;
                qt_problemas_resolvidos += p;
                if (p == 1)
                    caracteristica2[j] = 1;
                else
                    caracteristica3[j] = 0;
            }
            if (qt_problemas_resolvidos == qt_problemas)
                caracteristica1 = 0;
            if (qt_problemas_resolvidos == 0)
                caracteristica4 = 0;
        }
        cout << caracteristica1 + trataCaracteristica2(caracteristica2) + trataCaracteristica3(caracteristica3) + caracteristica4 << endl;
    }
	return 0;
}
