#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x, F, a, b, h;
	
	cout<< "Enter a = ";
	cin >> a;
	
	cout<< "Enter b = ";
	cin >> b;
	
	cout<< "Enter h = ";
	cin >> h;
	
	for (x = a ; x < b; x += h) {
		cout << endl << "x = " << x << endl << "F = " << x - sin(x) << endl << endl;
	}
	
	return 0;
}

