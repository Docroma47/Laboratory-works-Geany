#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159265;

double calculate(double x, double y) {
	return ((sin(pi / 180 * x) + cos(pi / 180 * y)) / (cos(pi / 180 * x) - sin(pi / 180 * y))) * tan(pi / 180 * x * y);
}

