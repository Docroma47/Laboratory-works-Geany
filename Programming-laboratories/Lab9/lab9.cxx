#include <iostream>
#include <ctime>
#include <fstream> 
#include <cstdlib>

using namespace std;

using std::ifstream; 
using std::ofstream; 

int main() {
	srand(time(0)); 
	int size = 10;
	
	ofstream f("f.txt"); 
	
	for (int i = 0; i < size; i++) { 
		f << rand()% 100 <<'\n'; 
	} 
	
	f.close(); 
	
	ifstream f1("f.txt"); 
	ofstream g("g.txt");
	
	int x;
	int sum = 0;
	
	for (int i = 0; i < size; i++) {
		f1 >> x;
		cout<< "x = " << x << endl;
		sum = sum + x;
	}
	
	cout<< "В файл записана сумма всех чисел файла f, она равна: " << sum << endl;
	
	g<< sum;
	
	f1.close(); g.close();
	
	return 0;
}

