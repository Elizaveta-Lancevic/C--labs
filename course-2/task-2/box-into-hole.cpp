#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	double x;
	std::cout << "Введите ширину отверстия: ";
	std::cin >> x;
	double y;
	std::cout << "Введите длину отверстия: ";
	std::cin >> y;
	double a;
	std::cout << "Введите высоту кирпича: ";
	std::cin >> a;
	double b;
	std::cout << "Введите ширину кирпича: ";
	std::cin >> b;
	double c;
	std::cout << "Введите длину кирпича: ";
	std::cin >> c;
	if ((a <= x && b <= y) || (a <= y && b <= x)) {
		std::cout << "Кирпич влезет";
	}
	else if ((a <= x && c <= y) || (a <= y && c <= x)) {
		std::cout << "Кирпич влезет";
	}
	else if ((b <= x && c <= y) || (b <= y && c <= x)) {
		std::cout << "Кирпич влезет";
	}
	else {
		std::cout << "Кирпич не влезет";
	}
	return 0;
}
