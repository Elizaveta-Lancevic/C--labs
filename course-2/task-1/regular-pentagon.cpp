#include <iostream>
#include <Windows.h>
#include <cmath>
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	double S;
	std::cout << "Площадь правильного пятиугольника:";
	std::cin >> S;
	double C = 2 * sqrt(S); //верхняя часть формулы
	double B = sqrt(sqrt(25 + 10 * sqrt(5))); //нижняя часть формулы
	double A = C / B;
	std::cout << A;
	return 0;
}