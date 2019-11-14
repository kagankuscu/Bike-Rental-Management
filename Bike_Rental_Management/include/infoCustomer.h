#ifndef INFOCUSTOMER_H
#define INFOCUSTOMER_H
#include <string>
#include "m_fstream.h"

class customerDetail : public c_fstream
{
protected:
	char bNum[100];
	char name[100];
	char address[100];
	char phoneNum[100];
	char email[100];
	char days[100];

public:
	customerDetail();
	void showForm();
	void viewRentalBike();
};
#endif
