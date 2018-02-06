#include <iostream>
#include <cmath>

using namespace std;

double calculate(double x, double y) {
	return (sin(x) + cos(y) / cos(x) - sin(y)) * tan(x * y);
}

