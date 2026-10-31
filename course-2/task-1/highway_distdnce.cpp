#include <iostream>
#include <cmath>
#include <Windows.h>
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	char choice;
	bool vixod = true;
	double A, B, C;
	while (vixod) {
		std::cout << "Введите расстояние от 1-го дома A до шоссе: ";
		std::cin >> A;
		std::cout << "Введите расстояние от 2-го дома B до шоссе: ";
		std::cin >> B;
		std::cout << "Введите расстояние между домами C: ";
		std::cin >> C;

		if (C >= std::abs(A - B)) {
			double Y = std::sqrt(C * C - (A - B) * (A - B)); 
			double X = (B * B - A * A + Y * Y) / (2 * Y); 
			double R = std::sqrt(X * X + A * A); 
			std::cout << "Расстояние от каждого дома до остановки равно: " << R << "\n";
		}
		else {
			std::cout << "Некорректные данные расстояний (такое расположение невозможно).\n";
		}
		std::cout << "\n Выйти из программы? (y/n): ";
		std::cin >> choice;
		if (choice == 'y' || choice == 'Y') {
			vixod = false;
		}
		std::cout << "\n";
	}
	return 0;
}