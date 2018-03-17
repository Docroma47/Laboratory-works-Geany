#include <exception>
#include "MathUtils.cxx"

using namespace std;



int main() {
	double resultDeg = calculateDegrees(0, pi / 2);
	double resultRad = calculateRad(0, 90);
	
	if (resultDeg != 0) {
		cout<< "Ошибка в Deg: " << resultDeg << endl;
		throw std::exception();
	}
	
	if (resultRad != 0) {
		cout<< "Ошибка в Rad: " << resultRad << endl;
		throw std::exception();
	}
	
	if (resultDeg == resultRad) {
		cout<< "Проверка завершенна, формула работает по заданной спецификации." << endl;
	}
}

