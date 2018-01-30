#include <iostream>
#include <cmath>


using namespace std;

int main() {
	double x, y;
	double sum;
	cout << "Please, input X and Y value: " << endl;
	cin >> x;
	cin >> y;
	
	sum = (sin(x) + cos(y) / cos(x) - sin(y)) * tan(x) * y;
	cout << "Answer = " << sum << endl;
	
	return 0;
}
