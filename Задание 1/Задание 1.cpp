#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a, b = 1, c = 0;
	cout << "Введите число ";
	cin >> a;
	while (b <= a)
	{
		if (a % b == 0)
		{
			c += 1;
			cout << b << "\n";
		}
		b += 1;
	}
	return 0;
}