#ifndef MENU_H
#define MENU_H
#include "clean.h"
#include "infoCustomer.h"

class menu :public clean, public customerDetail {
protected:
	int enterNum;

public:
	menu();
	int menuShow();
	bool goToMenu(char id);
};
#endif
