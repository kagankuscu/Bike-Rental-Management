#include <iostream>
#include <conio.h>
#include "..\include\welcomePage.h"
#include "..\include\login.h"
#include "..\include\infoCustomer.h"
#include "..\include\menu.h"

int main(int argc, char const* argv[]) {
	bool b = false, always = true;
	char z = '0';

	welcomePage wp;
	wp.cls();

	login lg;
	menu mn;

	b = lg.loginInput();
	while (always) {
		if (b == 1) {
			lg.cls();
			z = mn.menuShow();
			always = mn.goToMenu(z);
		}
		else {
			lg.cls();
			b = lg.loginInput();
		}
	}

	char c = _getche();
	return 0;
}
