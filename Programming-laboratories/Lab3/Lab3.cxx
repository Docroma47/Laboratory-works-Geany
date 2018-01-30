#include <iostream>
#include <math.h> 

using namespace std;

int main() {
	double x1, y1; // A
	double x2, y2; // B
	double x3, y3; // A
	double A;
	double B;
	double C;
	double P;
	double S;
	
	cout<< "Please, enter X, Y value: "<< endl;
	
	cin >> x1;
	cin >> y1;
	cin >> x2;
	cin >> y2;
	cin >> x3;
	cin >> y3;
	
	A = x1 + y1;
	B = x2 + y2;
	C = x3 + y3;
	
	A = pow(A, 2);
	B = pow(B, 2);
	C = pow(C, 2);
	
	P = sqrt((A + B) + (C + B) + (A + C));
	cout<< "P = " << P << endl;
	
	S = sqrt((x1 - x3) * (y2 - y3) - (x2 -x3) * (y1 - y3));
	cout<< "S = " << S << endl;
		
	return 0;
	
	
}

