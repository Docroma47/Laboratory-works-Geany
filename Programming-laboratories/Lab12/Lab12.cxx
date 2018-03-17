#include <iostream>
#include <string>

using namespace std;

void repchar(string ch, string ch2);

int main() {
	setlocale(LC_ALL, "rus");
	repchar("", "");
	repchar("Иван", "");
    repchar("Иван", "Васильевич"); 
    
	return 0;
}

void repchar(string ch, string ch2) {
    if (ch == "" && ch2 == "") {
		cout<< "Привет!" << endl;
	} else if (ch == "Иван" && ch2 == "") {
		cout<< "Привет, Иван!" << endl;
	} else if (ch == "Иван" && ch2 == "Васильевич") {
		cout<< "Привет, Иван Васильевич!" << endl;
	}
}

