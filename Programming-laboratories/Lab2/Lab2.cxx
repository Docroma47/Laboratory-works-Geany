#include <iostream>
#include <cmath>
#include "MathUtils.cxx"


using namespace std;

int main() {
	double x, y;
	double sumDegrees, sumRad;
	cout << "Please, input X and Y value: " << endl;
	cout<< "Enter x = ";
	cin >> x;
	
	cout<< "Enter y = ";
	cin >> y;
	
	sumDegrees = calculateDegrees(x, y);
	cout << "Answer degrees = " << sumDegrees << endl;
	
	sumRad = calculateRad(x, y);
	cout << "Answer rad = " << sumRad << endl;
	
	return 0;
}
