#include <exception>
#include "MathUtils.cxx"

using namespace std;

	
int main() {
	double result = calculate(0, 1);
	double result1 = calculate(-1, 0);
	double result2 = calculate(0, -1);
	double result3 = calculate(1, 0);
	
	if (result != 0)
	throw std::exception();
	
	if (result1 != 0)
	throw std::exception();
		
	if (result2 != 0)
	throw std::exception();
	
	if (result3 != 0)
	throw std::exception();
}
