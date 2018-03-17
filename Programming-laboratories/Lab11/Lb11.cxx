#include <iostream>
#include <cmath>

using namespace std;

double myFunction(double myParam);

int main() {
	double x;
	cout << "Введите x= ";
	cin >> x;
	
	cout << "F(x)= " << myFunction(x) << endl;
	
	return 0;
}

double myFunction(double myParam) {
	if (myParam <= 3) {
		return(pow(myParam, 2) - (3 * myParam) + 9); // возвращаемое значение 1
	}
	else {
		return((1 / (pow(myParam, 3) + 6))); // возвращаемое значение 1
	}
}
