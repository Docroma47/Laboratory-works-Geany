#include <exception>
#include "MathUtils.cxx"

using namespace std;



int main() {
	double result = calculateDegrees(30, -5);
	double result1 = calculateDegrees(360, 0);
	double result2 = calculateDegrees(45, 15);
	double result3 = calculateDegrees(130, -70);
	
	if ((0.90625839049 - result) > 0.0000001) {
		cout<< "Ошибка в 1: " << result << endl;
		throw std::exception();
	}
	
	if (result1 != 0) {
		cout<< "Ошибка в 2: " << result1 << endl;
		throw std::exception();
	}
	
	if ((-3.73205080757 - result2) > 0.0001) {
		cout<< "Ошибка в 3: " << result2 << endl;
		throw std::exception();
	}
	
	if ((21.1655118949 - result3) > 0.00001) {
		cout<< "Ошибка в 4: " << result3 << endl;
		throw std::exception();
	}
	
	double resultRad = calculateRad(2 * pi / 3 , pi / 2);
	double resultRad1 = calculateRad(pi / 4, pi / 6);
	double resultRad2 = calculateRad(2 * pi, 4 * pi / 3);
	double resultRad3 = calculateRad(5 * pi / 6, pi / 2);
	
	if ((-0.08623982861 - resultRad) > 0.00001) {
		cout<< "Ошибка в calculateRad 1: " << resultRad << endl;
		throw std::exception();
	}
	
	if ((3.31249716721 - resultRad1) > 0.00001) {
		cout<< "Ошибка в calculateRad 2: " << resultRad1 << endl;
		throw std::exception();
	}
	
	if ((-0.66201540035 - resultRad2) > 0.00001) {
		cout<< "Ошибка в calculateRad 3: " << resultRad2 << endl;
		throw std::exception();
	}
	
	if ((-0.39161502547 - resultRad3) > 0.00001) {
		cout<< "Ошибка в calculateRad 4: " << resultRad3 << endl;
		throw std::exception();
	}
}

