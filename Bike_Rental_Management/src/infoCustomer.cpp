#include "..\include\infoCustomer.h"
#include <iostream>
#include <windows.h>
#include <fstream>
#include "..\include\m_fstream.h"
#include <conio.h>

// show us add form
void customerDetail::showForm() {
	std::cout << "Enter Customer Details:" << '\n';
	std::cout << "------------------------" << '\n';
	std::cout << "Enter Bike Number     : ";
	std::cin.getline(bNum, sizeof(bNum));
	std::cout << "Enter Name            : ";
	std::cin.getline(name, sizeof(name));
	std::cout << "Enter Adress          : ";
	std::cin.getline(address, sizeof(address));
	std::cout << "Enter Phone Number    : ";
	std::cin.getline(phoneNum, sizeof(phoneNum));
	std::cout << "Enter Email           : ";
	std::cin.getline(email, sizeof(email));
	std::cout << "Enter Time Period     : ";
	std::cin.getline(days, sizeof(days));
	std::cout << "                        " << '\n';
	std::cout << "                        " << '\n';

	if (bNum != 0)
		c_fstream::f_write(bNum, name, address, phoneNum, email, days);
	std::cout << "\t\tPress any key to continue...";
	char  c = _getch();
}
// show to database
void customerDetail::viewRentalBike()
{
	std::cout << "\n\n";
	std::cout << "Bike Number     Name        Address          Phone Number   Email                      Days" << '\n';
	std::cout << "-------------------------------------------------------------------------------------------" << '\n';
	c_fstream::f_read();
	std::cout << "-------------------------------------------------------------------------------------------" << '\n';
	std::cout << "\t\tPress any key to continue...";
	char c = _getch();
}
