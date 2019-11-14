#include "..\include\infoCustomer.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include "..\include\m_fstream.h"
#include <stdio.h>

customerDetail::customerDetail() {
	//bNum = 0;
	//name = "";
	//address = "";
	//phoneNum = 0;
	//email = "";
	//days = 0;
}

void customerDetail::showForm() {
	std::cout << "Enter Customer Details:" << '\n';
	std::cout << "------------------------" << '\n';
	std::cout << "Enter Bike Number     : ";
	std::cin >> bNum;
	std::cout << "Enter Name            : ";
	std::cin >> name;
	std::cout << "Enter Adress          : ";
	std::cin >> address;
	std::cout << "Enter Phone Number    : ";
	std::cin >> phoneNum;
	std::cout << "Enter Email           : ";
	std::cin >> email;
	std::cout << "Enter Time Period     : ";
	std::cin >> days;
	std::cout << "                        " << '\n';
	std::cout << "                        " << '\n';

	if (bNum != 0)
		c_fstream::f_write(bNum, name, address, phoneNum, email, days);
	system("pause");
}

void customerDetail::viewRentalBike()
{
	std::cout << '\n' << '\n';
	std::cout << "Bike Number     Name        Address          Phone Number   Email                      Days" << '\n';
	std::cout << "-------------------------------------------------------------------------------------------" << '\n';
	c_fstream::f_read();
	std::cout << "-------------------------------------------------------------------------------------------" << '\n';
	system("pause");
}
