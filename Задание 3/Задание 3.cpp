#include <iostream>
using namespace std;
int main()
{
	setlocale(NULL, "rus");
	for (;;)
	{
		int a;
		cout << "Введите число от 1 до 7. Для того чтобы закончить работу введите 0:\n";
		cin >> a;
		if (a == 1) cout << "Это единица!\n";
		else if (a == 2) cout << "Это двойка!\n";
		else if (a == 3) cout << "Это тройка!\n";
		else if (a == 4) cout << "Это четвёрка!\n";
		else if (a == 5) cout << "Это пятёрка!\n";
		else if (a == 6) cout << "Это шестёрка!\n";
		else if (a == 7) cout << "Это семёрка!\n";
		else if (a == 0) break;
		else cout << "Не знаю такое число! Введите число еще раз\n";
	}
}