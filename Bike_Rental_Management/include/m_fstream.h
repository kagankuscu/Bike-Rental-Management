#ifndef M_FSTREAM_H
#define M_FSTREAM_H

class c_fstream
{
protected:
	char databaseFolder[105] = "C:/Bike/Bike_Rental_Management/doc/database.txt";
	char testFolder[105] = "C:/Bike/Bike_Rental_Management/doc//test.txt";

public:
	void f_write(char* bNum, char* name, char* address, char* phoneNum, char* email, char* days);
	void f_read();
	void f_delete();
	void f_search();
};
#endif
