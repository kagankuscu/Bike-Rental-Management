#include "..\include\login.h"
#include <iostream>
#include <string>
#include <conio.h>
// construction
login::login() {
	userN = "";
	passW = "";
}
// login check, user and password
bool login::loginForm(std::string username, std::string password) {
	if (username == userName && password == passWord) {
		std::cout << "    Now you are logged in, Welcome to our system!!" << '\n';
		std::cout << "\t\tPress any key to continue...";
		char c = _getch();
		return true;
	}
	else {
		std::cout << "    You entered wrong username or password! Try Again." << '\n';
		std::cout << "\t\tPress any key to continue...";
		char c = _getch();
		return false;
	}
}
// login form
bool login::loginInput() {
	std::cout << "<<<<<<<<<<<<<<<<<<<<<< Login Form >>>>>>>>>>>>>>>>>>>>>>" << '\n';
	std::cout << "                      Enter Username : ";
	std::getline(std::cin, userN);
	std::cout << "                      Enter Password : ";
	std::getline(std::cin, passW);
	bool b = login::loginForm(userN, passW);
	return b;
}
