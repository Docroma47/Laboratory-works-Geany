#include <iostream>
#include <math.h> 

using namespace std;

int main() {
	int x, y, z, n;
	
	cout<< "Enter x = ";
	cin >> x;
	
	cout<< "Enter y = ";
	cin >> y;
	
	cout<< "Enter z = ";
	cin >> z;
	
	cout<< "Enter n = ";
	cin >> n;
	
	cout<< "Your number: " << x << y << z << n << endl;
	
	if((x + y) == (z + n)) {
		cout<< "True";
		
	} else {
		cout<< "False";
	}
	return 0;
}

