#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	setlocale(NULL, "rus");
	int c;
	cout << "Введите с:";
	cin >> c;
	for (int a = 0; a <= c; a += 1)
	{
		for (int b = 0; b <= c; b += 1)
		{
			if (pow(a, 2) + pow(b, 2) == pow(c, 2)) cout << pow(a, 2) << "+" << pow(b, 2) << "=" << pow(c, 2) << "\n";
		}
	}
	return 0;
}