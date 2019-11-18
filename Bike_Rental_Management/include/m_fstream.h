#ifndef M_FSTREAM_H
#define M_FSTREAM_H
#include <vector>

class c_fstream
{
protected:
	char databaseFolder[105] = "C:/Bike/Bike_Rental_Management/doc/database.txt";
	char testFolder[105] = "C:/Bike/Bike_Rental_Management/doc/test.txt";

public:
	void gotoxy(int x, int y);
	void f_write(char* bNum, char* name, char* address, char* phoneNum, char* email, char* days);
	void f_read();
	void f_delete();
	void f_search();
	std::vector <std::string> parse_string(std::string str);
};
#endif
