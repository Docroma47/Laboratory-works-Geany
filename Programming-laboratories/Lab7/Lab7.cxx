#include <iostream>
#include <string>

using namespace std; 

int main() {
	string str[256] = "Welcome my hero!";
	int x = 0;
	
	for (unsigned i = 0; i < str[i].size(); i++) {
		if(str[i] != "\0") {
			x = x + 1;
		}
	}
	
	cout<< "Количесво букв в продложении: " <<  x - 1 << endl;
	
	return 0;
}

