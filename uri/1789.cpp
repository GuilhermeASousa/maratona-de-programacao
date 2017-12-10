#include <iostream>
 
using namespace std;
 
int main() {
	int num_lesmas, vel_lesma, max_vel, i;
	while (cin >> num_lesmas){
		max_vel = 0;
		for (i = 0; i < num_lesmas; i++){
			cin >> vel_lesma;
			if (vel_lesma > max_vel)
				max_vel = vel_lesma;
		}
		if (max_vel < 10)
			cout << "1" << endl;
		else if (max_vel >= 10 && max_vel < 20)
			cout << "2" << endl;
		else
			cout << "3" << endl;
	}
	return 0;
}