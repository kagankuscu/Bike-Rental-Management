#include "..\include\login.h"
#include <iostream>
#include <string>

login::login() {
	userN = "";
	passW = "";
}

bool login::loginForm(std::string username, std::string password) {
	if (username == userName && password == passWord) {
		std::cout << "    Now you are logged in, Welcome to our system!!" << '\n';
		system("pause");
		return true;
	}
	else {
		std::cout << "    You entered wrong username or password! Try Again." << '\n';
		system("pause");
		return false;
	}
}

bool login::loginInput() {
	std::cout << "<<<<<<<<<<<<<<<<<<<<<< Login Form >>>>>>>>>>>>>>>>>>>>>>" << '\n';
	std::cout << "                      Enter Username : ";
	std::getline(std::cin, userN);
	//std::cin >> userN;
	std::cout << "                      Enter Password : ";
	std::getline(std::cin, passW);
	//std::cin >> passW;
	bool b = login::loginForm(userN, passW);
	//std::cout << b;
	return b;
}
