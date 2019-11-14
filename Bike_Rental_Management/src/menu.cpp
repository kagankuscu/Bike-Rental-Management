#include "..\include\menu.h"
#include <iostream>
#include "..\include\infoCustomer.h"
#include "..\include\clean.h"
#include <conio.h>

menu::menu() {
	enterNum = 0;
}

int menu::menuShow() {
	std::cout << "---------------------------------" << '\n';
	std::cout << "Enter 1 ->> Rent a bike          " << '\n';
	std::cout << "---------------------------------" << '\n';
	std::cout << "Enter 2 ->> View Rental Record   " << '\n';
	std::cout << "---------------------------------" << '\n';
	std::cout << "Enter 3 ->> Remove Rental Record " << '\n';
	std::cout << "---------------------------------" << '\n';
	std::cout << "Enter 4 ->> Search Rental Record " << '\n';
	std::cout << "---------------------------------" << '\n';
	std::cout << "Enter 5 ->> Edit Record          " << '\n';
	std::cout << "---------------------------------" << '\n';
	std::cout << "Enter 6 ->> Exit                 " << '\n';
	std::cout << "---------------------------------" << '\n';

	enterNum = _getch();
	return enterNum;
}

bool menu::goToMenu(char id) {
	clean::cls();

	switch (id) {
	case '1':
		customerDetail::showForm();
		break;
	case '2':
		customerDetail::viewRentalBike();
		break;
	case '3':
		customerDetail::f_delete();
		break;
	case '4':
		break;
	case '5':
		break;
	case '6':
		std::cout << "/* I'll see you later. */" << '\n';
		return 0;
		break;
	default:
		break;
	}
	return 1;
}
