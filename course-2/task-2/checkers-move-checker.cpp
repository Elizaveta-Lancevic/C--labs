#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int x1, y1, x2, y2;
	cout << "x белой шашки x<=8: ";
	cin >> x1;
	while (x1 > 8 || x1 < 0) {
		cout << "Ошибка! Введите корректный х (меньше 8): ";
		cin >> x1;
	}
	cout << "y белой шашки y<=8: ";
	cin >> y1;
	while (y1 > 8 || y1 < 0) {
		cout << "Ошибка! Введите корректный y (меньше 8): ";
		cin >> y1;
	}
	cout << "x черной шашки x<=8: ";
	cin >> x2;
	while (x2 > 8 || x2 < 0) {
		cout << "Ошибка! Введите корректный х (меньше 8): ";
		cin >> x2;
	}
	cout << "y черной шашки Y<=8: ";
	cin >> y2;
	while (y2 > 8 || y2 < 0) {
		cout << "Ошибка! Введите корректный y (меньше 8): ";
		cin >> y2;
	}
	if ((y1 == 7 && y2 == 8) || (y1 == 2 && y2 == 1) || (x1 == 2 && x2 == 1) || (x1 == 7 && x2 ==
		8))
		cout << "не сможет";
	else if (abs(x1 - x2) == 1 && y2 - y1 == 1)
		cout << "сможет";
	else
		cout << "не сможет";
	return 0;
}
