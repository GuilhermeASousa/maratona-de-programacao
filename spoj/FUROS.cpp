#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int qt_furos, x, y, diametro, testeId, i, j;
    vector< pair<int,int> > pontos;
    vector<double> distancias;
    double dist, dist_max, dist_min;
    testeId = 1;
    while (true) {
        cin >> qt_furos;
        if (qt_furos == 0)
            break;
        dist_max = -1;
        dist_min = 999999999;
        pontos.clear();
        distancias.clear();
        for (i = 0; i < qt_furos; i++) {
            cin >> x >> y;
            pontos.push_back(make_pair(x,y));
        }
        for (i = 0; i < qt_furos; i++) {
            for (j = 0; j < qt_furos; j++) {
                if (i != j) {
                    dist = pow(pontos[i].first - pontos[j].first, 2) + pow(pontos[i].second - pontos[j].second, 2);
                    if (dist_max < dist)
                        dist_max = dist;
                }
            }
            distancias.push_back(dist_max);
            dist_max = -1;
        }
        for (i = 0; i < distancias.size(); i++) {
            if (distancias[i] < dist_min)
                dist_min = distancias[i];
        }
        diametro = 2 * sqrt(dist_min) + 5;
        cout << "Teste " << testeId << endl;
        cout << diametro << endl << endl;
        testeId++;
    }
	return 0;
}
