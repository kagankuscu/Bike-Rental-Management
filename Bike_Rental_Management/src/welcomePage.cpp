#include "..\include\welcomePage.h"
#include <iostream>
#include <time.h>

welcomePage::welcomePage() {
	std::cout << "      |---------------------------------------|" << std::endl;
	std::cout << "      |                                       |" << std::endl;
	std::cout << "      |                                       |" << std::endl;
	std::cout << "      |     -----------------------------     |" << std::endl;
	std::cout << "      |     Welcome To Bike Rental System     |" << std::endl;
	std::cout << "      |     -----------------------------     |" << std::endl;
	std::cout << "      |                                       |" << std::endl;
	std::cout << "      |                                       |" << std::endl;
	std::cout << "      |                 Bulgaria              |" << std::endl;
	std::cout << "      |                  Sofia                |" << std::endl;
	std::cout << "      |---------------------------------------|" << std::endl;
	std::cout << "                                               " << std::endl;
	std::cout << "                                               " << std::endl;
	std::cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
	getDate();
	std::cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
	system("pause");
}

void welcomePage::getDate()
{
	time_t now = time(0);
	char dt[26];
	ctime_s(dt, sizeof dt, &now);
	std::cout << "Current date and time : " << dt;
}
