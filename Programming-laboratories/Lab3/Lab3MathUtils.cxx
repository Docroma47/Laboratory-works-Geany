#include <iostream>
#include <cmath>

double side(double x2, double y2, double x1, double y1) { // Расcтояние между вершмнами(это и есть стороны);
	return sqrt((pow(x2, 2) - pow(x1, 2)) + (pow(y2, 2) - pow(y1, 2))); 
}

double side1(double x3, double y3, double x2, double y2) { // Расcтояние между вершмнами(это и есть стороны);
	return sqrt((pow(x3, 2) - pow(x2, 2)) + (pow(y3, 2) - pow(y2, 2))); 
}

double side2(double x1, double y1, double x3, double y3) { // Расcтояние между вершмнами(это и есть стороны);
	return sqrt((pow(x1, 2) - pow(x3, 2)) + (pow(y1, 2) - pow(y3, 2))); 
}

double perimeter(double a, double b, double c) { // Периметр;
	return a + b + c;
}

double semiperimeter(double per) { // Полупериметр;
	return per / 2;
}

double area(double p, double a, double b, double c) { // Формула Герона;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
