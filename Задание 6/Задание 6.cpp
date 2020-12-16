#include <iostream>
using namespace std;
int main()
{
	int a = 1, b;
	setlocale(NULL, "rus");
	while (a > 0)
	{
		cout << "Введите число:\n";
		cin >> a;
		if (a > 0)
		{
			b = 1;
			for (int i = 1; i <= a; i++)
			{
				b *= i;
			}
			cout << "Факториал =" << b << "\n";
		}
		else break;
	}
	return 0;
}