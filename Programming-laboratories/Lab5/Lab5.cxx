#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, y, z;
	
	cout<< "Enter x = ";
	cin >> x;
	
	cout<< "Enter y = ";
	cin >> y;
	
	cout<< "Enter z = ";
	cin >> z;
	
	cout<< "Your numbers: " << x << ", " << y << ", " << z << endl;
	
	if (x >= 0) {
		x = pow(x, 2);
		cout<< "Your finite numbers: x = " << x << endl;
	} else {
		x = pow(x, 4);
		cout<< "Your finite numbers: x = " << -x << endl;
	}
	
	if (y >= 0) {
		y = pow(y, 2);
		cout<< "Your finite numbers: y = " << y << endl;
	} else {
		y = pow(y, 4);
		cout<< "Your finite numbers: y = " << -y << endl;
	}
	
	if (z >= 0) {
		z = pow(z, 2);
		cout<< "Your finite numbers: z = " << z << endl;
	} else {
		z = pow(z, 4);
		cout<< "Your finite numbers: z = " << -z << endl;
	}
		

	return 0;
}

