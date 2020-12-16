#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(NULL, "rus");
	double a, b, c, D, x;
	cout << "Введите a,b,c" << "\n";
	cin >> a >> b >> c;
	D = pow(b, 2) - (4 * a * c);
	if (D >= 0)
	{
		x = (-b + sqrt(D)) / (2 * a);
		cout << "x2 =" << x << "\n";
		x = (-b - sqrt(D)) / (2 * a);
		cout << "x1 =" << x << "\n";
	}
	else cout << "Корней нет. \n";
	return 0;
}