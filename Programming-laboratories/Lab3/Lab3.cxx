#include <iostream>
#include "Lab3MathUtils.cxx"

using namespace std;

int main() {
	// Задача: Даны координаты трех вершин треугольника (x1, y1), (x2, y2), (x3, y3). Найти его периметр и площадь.
	double x, y; // (x1, y1)
	double x2, y2; // (x2, y2)
	double x3, y3; // (x3, y3)
	double A, B, C;
	double S, P, simeper;
	
	cout<< "Please, enter X, Y value: "<< endl;
	
	cout<< "Ведите х: " << endl;
	cin >> x;
	cout<< "Ведите у: "	<< endl;
	cin >> y;
	cout<< "Ведите х2: " << endl;
	cin >> x2;
	cout<< "ПВедите у2: " << endl;
	cin >> y2;
	cout<< "Ведите х3: " << endl;
	cin >> x3;
	cout<< "Ведите у3: " << endl;
	cin >> y3;
	
	A = side(x2, y2, x, y);
	B = side1(x3, y3, x2, y2);
	C = side2(x, y, x3, y3);
	P = perimeter(A, B, C);
	simeper = semiperimeter(P);
	S = area(simeper, A, B, C);
	
	cout<< "Периметр: "	<< P << endl;
	cout<< "Площадь: " << S << endl;
	
	return 0;
	
	
}

