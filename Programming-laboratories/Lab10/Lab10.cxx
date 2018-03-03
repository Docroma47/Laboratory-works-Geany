#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand (time(0));
	int x = rand()% 3;
	vector <string> c;
	
	for (int i = 0; i < 30; i++) {
		if (x == 1) {
			c.push_back("E ");
			c.push_back("F ");
			x = rand()% 3;
		} else if (x == 2) {
			c.push_back("F ");
			x = rand()% 3;
		} else {
			c.push_back("A ");
			x = rand()% 3;
		}
	}
	
	for (int i = 0; i < 30; i++) {
		cout<< c[i] << " ";
	}
	
	return 0;
}

