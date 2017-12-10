#include <iostream>
#include <map>

using namespace std; 
int main (){
	int n = 0;
	int value = 0;
	cin>>n;
	map<int, int> candidatos;
	
	while(n){
		cin>>value;
		candidatos[value]++;
		n--;
	}

	map<int,int>::iterator it;
	int maior = 0;
	int valorMaior = 0;
	for (it = candidatos.begin(); it != candidatos.end(); it++)
	{
		if(it->second > valorMaior) {
			maior = it->first;
			valorMaior = it->second;
		}
	}
	cout<<maior<<endl;
	return 0;
}
