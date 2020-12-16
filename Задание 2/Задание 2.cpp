#include <iostream>
using namespace std;

int main()
{
	setlocale(NULL, "rus");
	double a, b;
	cout << "Введите числа a и b \n";
	cin >> a >> b;
	cout << "x= " << b / a << "\n";
	return 0;
}