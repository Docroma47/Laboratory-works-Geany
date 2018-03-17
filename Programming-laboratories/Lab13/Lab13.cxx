#include <iostream>
#include <string>

using namespace std;

void repcharHi();
void repcharIvan();
void repcharIvanVasiliy();
void swap(int x, int y); // 3 , 7
void swap(string ch, string ch2); //"Иван","Марья"

int main() {
	setlocale(LC_ALL, "rus");
	repcharHi();
	repcharIvan();
    repcharIvanVasiliy();
    swap(3 , 7);
    swap("Иван","Марья");
    
	return 0;
}

void repcharHi() {
	cout<< "Привет!" << endl;
}
	
void repcharIvan() {
	cout<< "Привет, Иван!" << endl;
}

void repcharIvanVasiliy() {
    cout<< "Привет, Иван Васильевич!" << endl;
}

void swap(int x, int y) {
    cout<< "Сумма значений двух переменных: " << x + y << endl;
}

void swap(string ch, string ch2) {
    cout<< "Значение двух переменных: " << ch << ", " << ch2 << endl;
}
