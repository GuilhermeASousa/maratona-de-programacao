#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findsr(string str, string substr, int tam_str) {
    int tam_substr, cont, i;
    string aux;
    tam_substr = substr.size();
    cont = 0;
    for (i = 0; i < tam_str; i += tam_substr) {
        aux = str.substr(i, tam_substr);
        if (aux == substr)
            cont++;
        else {
            cont = 0;
            break;
        }
    }
    return cont;
}

int main() {
    string str, substr;
    int i, tam_str, cont;
    while (true) {
      cin >> str;
      if (str == "*")
        break;
      tam_str = str.size();
      for (i = 0; i < tam_str; i++) {
          if (tam_str % (i+1) == 0) {
              substr = str.substr(0, i+1);
              cont = findsr(str, substr, tam_str);
              if (cont != 0) {
                  cout << cont << endl;
                  break;
              }
              substr.clear();
          }
      }
      if (cont == 0) {
          cout << "1" << endl;
      }
      str.clear();
    }
    return 0;
}