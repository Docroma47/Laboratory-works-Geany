#include <iostream>
#include <cmath>
#include "MathUtils.cxx"


using namespace std;

int main() {
	double x, y;
	double sum;
	cout << "Please, input X and Y value: " << endl;
	cout<< "Enter x = ";
	cin >> x;
	
	cout<< "Enter y = ";
	cin >> y;
	
	sum = calculate(x, y);
	cout << "Answer = " << sum << endl;
	
	return 0;
}
