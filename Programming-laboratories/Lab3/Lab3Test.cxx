#include <iostream>
#include "Lab3MathUtils.cxx"

using namespace std;

int main() {
	double sideA = side(-6, 2, 1, -5);
	double sideB = side1(6, -6, -2, 1);
	double sideC = side2(2, 6, -5, -2);
	double per = perimeter(sideA, sideB, sideC);
	double semiper = semiperimeter(per);
	double areaS = area(semiper, sideA, sideB, sideC);
	
	cout<< sideA << endl;
	cout<< sideB << endl;
	cout<< sideC << endl;
	cout<< per << endl;
	cout<< semiper << endl;
	cout<< areaS << endl;
	
	if (per != 15.2436) {
		throw std::exception();
	}
	
	double sideA1 = side(6, 0, 4, 1); 
	double sideB2 = side1(6, 6, -2, 4);
	double sideC3 = side2(0, 6, 1, -2);
	double per1 = perimeter(sideA1, sideB2, sideC3);
	double semiper1 = semiperimeter(per1);
	double areaS1 = area(semiper1, sideA1, sideB2, sideC3);
	
	cout<< endl << sideA1 << endl;
	cout<< sideB2 << endl;
	cout<< sideC3 << endl;
	cout<< per1 << endl;
	cout<< semiper1 << endl;
	cout<< areaS1 << endl;
	
	if (per1 != 17.1378 && areaS1 != 12.1244) {
		throw std::exception();
	}
}

