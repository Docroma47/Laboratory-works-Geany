#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char **argv) {
	srand(time(NULL));
	int chr[100];
	int y = 20;
	
	for (int i = 0; i < y; i++) {
		chr[i] = rand() % 100 - rand() % 100;
	}
	
		
	if (chr[1] > 0) {
		cout<< "Число положительное." << endl;
	} else {
		cout<< "Число отрицательное." << endl;
	}
	
	return 0;
}

