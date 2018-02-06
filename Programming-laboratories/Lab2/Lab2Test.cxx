#include <exception>
#include "MathUtils.cxx"

using namespace std;

	
int main() {
	double result = calculate(0, 1);
	if (result != 0)
	throw std::exception();	
}
