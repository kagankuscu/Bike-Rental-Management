#ifndef LOGIN_H
#define LOGIN_H
#include <string>
#include "clean.h"

class login :public clean {
private:
	std::string userName = "kgn";
	std::string passWord = "11";

protected:
	std::string userN;
	std::string passW;

public:
	login();
	bool loginInput();
	bool loginForm(std::string username, std::string password);
};

#endif
