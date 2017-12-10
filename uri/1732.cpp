#include <iostream>
 
using namespace std;

void moveBaixo(int &y, int &indice) {
	y++;
    indice++;
}

void moveEsquerdaCima(int &x, int &indice) {
	x--;
    indice++;
}

void moveCima(int &y, int &indice) {
	y--;
    indice++;
}

void moveDireitaCima(int &x, int &y, int &indice) {
	x++;
	y--;
    indice++;
}

void moveDireitaBaixo(int &x, int &indice) {
	x++;
    indice++;
}

void moveEsquerdaBaixo(int &x, int &y, int &indice) {
	x--;
	y++;
    indice++;
}
 
int main() {
 	int favo, x, y, indice, profundidade, flag, i;
 	while(cin >> favo) {
 		x = y = 0;
 		indice = 1;
 		profundidade = 1;
 		flag = 0;
 		while (true) {
  			if(indice == favo)
  				break;		
 
  			for(i = 0;i < profundidade; i++)	{
  				moveBaixo(y, indice);
  				if(indice == favo) {
  					flag = 1;
  					break;
  				}
  			}

  			if (flag == 1)
  				break;

  			if(profundidade != 1)
  			{
  				for(i = 0; i < profundidade - 1; i++){
  					moveEsquerdaBaixo(x, y, indice);
  					if(indice == favo) {
  						flag = 1;
  						break;
  					}
  				}
  			}
  			
  			if (flag == 1)
  				break;

  			for(i = 0;i < profundidade; i++)	{
  				moveEsquerdaCima(x, indice);
  				if(indice == favo) {
  					flag = 1;
  					break;
  				}
  			}

  			if (flag == 1)
  				break;

  			for(i = 0;i < profundidade; i++)	{
  				moveCima(y, indice);
  				if(indice == favo) {
  					flag = 1;
  					break;
  				}
  			}

  			if (flag == 1)
  				break;
  			
  			for(i = 0;i < profundidade; i++)	{
  				moveDireitaCima(x, y, indice);
  				if(indice == favo) {
  					flag = 1;
  					break;
  				}
  			}
  			
			if (flag == 1)
  				break;

  			for(i = 0;i < profundidade; i++)	{
  				moveDireitaBaixo(x, indice);
  				if(indice == favo) {
  					flag = 1;
  					break;
  				}
  			}

  			if (flag == 1)
  				break;

  			profundidade++;
 		}
 		cout << x << " " << y << endl;
 	}
    return 0;
}