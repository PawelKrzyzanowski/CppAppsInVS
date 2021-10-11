#include <iostream>

int main() {
	using namespace std;

	int nr = 1;
	double price = 99.99;
	char type = 'C';
	string name = "Pawel";
	cout << "Write Your name" << endl;
	cin >> name;
	cout << "Welcome nr: "<< nr << "\n price: " << price << "\n category: " << type << "\n name: " << name << endl;
	system("pause");

	return 0;
}