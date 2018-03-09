#include <exception>
#include "MathUtils.cxx"

using namespace std;

	
int main() {
	double result = calculate(1, 1);
	double result1 = calculate(-1, 1);
	double result2 = calculate(1, 2);
	double result3 = calculate(1, 3);
	
	if ((0.01807524886 - result) > 0.000001) {
		cout<< "Ошибка в 1: " << result << endl;
		throw std::exception();
	}
	
	if (-(0.017460524 - result1) > 0.000001) {
		cout<< "Ошибка в 2: " << result1 << endl;
		throw std::exception();
	}
	
	if ((0.03677667448 - result2) > 0.000001) {
		cout<< "Ошибка в 3: " << result2 << endl;
		throw std::exception();
	}
	
	if ((0.05620046266 - result3) > 0.000001) {
		cout<< "Ошибка в 4: " << result3 << endl;
		throw std::exception();
	}
}

