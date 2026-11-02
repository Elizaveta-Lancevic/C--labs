#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int rooms, men, women;
	cout << "Введите количество палат: ";
	cin >> rooms;
	cout << "Введите количество больных мужчин: ";
	cin >> men;
	cout << "Введите количество больных женщин: ";
	cin >> women;
	int totalBeds = rooms * 4;
	int occupied = men + women;
	int freeBeds = totalBeds - occupied;
	int womenRooms = (women + 3) / 4;
	int menRooms = (men + 3) / 4;
	int freeRooms = rooms - womenRooms - menRooms;
	if (freeRooms < 0) freeRooms = 0;
	int freeInMenRooms = menRooms * 4 - men;
	int freeInFreeRooms = freeRooms * 4;

	int canAddMen = freeInMenRooms + freeInFreeRooms;
	cout << "Можно ещё положить мужчин: " << canAddMen << endl;
	return 0;
}
