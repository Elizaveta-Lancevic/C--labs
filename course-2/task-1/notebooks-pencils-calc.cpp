#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	double rub;
	std::cout << "Стоимость 1-ой тетради:";
	std::cin >> rub;
	double kop;
	std::cout << "Стоимость 1-ого карандаша:";
	std::cin >> kop;
	int tetr;
	std::cout << "Кол-во тетрадей:";
	std::cin >> tetr;
	std::cout << "Итоговая цена:" << rub * tetr << std::endl;
	int kar;
	std::cout << "Кол-во карандашей:";
	std::cin >> kar;
	std::cout << "Итоговая цена:" << rub * kar << std::endl;
	return 0;
}