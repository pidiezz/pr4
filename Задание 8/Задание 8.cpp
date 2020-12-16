#include <iostream>
using namespace std;
int main()
{
	int k, j = 1;
	setlocale(NULL, "rus");
	cout << "Введите число:\n";
	cin >> k;
	while (j < 11)
	{
		cout << k << "*" << j << "= " << k * j << "\n";
		j += 1;
	}
	return 0;
}