#include <iostream>
#include <cmath>

using namespace std;

double calculate(double x, double y) {
	double sum = (sin(x) + cos(y)) / (cos(x) - sin(y)) * tan(x * y);
	cout<< sum << endl;
	return (sin(x) + cos(y) / cos(x) - sin(y)) * tan(x * y);
}

