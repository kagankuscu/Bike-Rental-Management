#include "..\include\menu.h"
#include <iostream>
#include "..\include\infoCustomer.h"
#include "..\include\clean.h"
#include <conio.h>
// construction
menu::menu() {
	enterNum = 0;
}
// show us menu
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
	std::cout << "Enter 5 ->> Exit                 " << '\n';
	std::cout << "---------------------------------" << '\n';

	enterNum = _getch();
	return enterNum;
}
// this is open the selection from the menu
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
		c_fstream::f_delete();
		break;
	case '4':
		c_fstream::f_search();
		break;
	case '5':
		std::cout << "/* I'll see you later. */" << '\n';
		return 0;
		break;
	default:
		break;
	}
	return 1;
}
