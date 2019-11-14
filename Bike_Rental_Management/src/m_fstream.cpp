#include <iostream>
#include <fstream>
#include "..\include\m_fstream.h"
#include <vector>
#include <string>

void  c_fstream::f_write(char* bNum, char* name, char* address, char* phoneNum, char* email, char* days)
{
	std::string line;
	// outfile open as a write mode
	// we write text to test.txt and specific place
	std::fstream outfile;
	outfile.open(testFolder, std::ios::out);

	if (outfile.is_open())
	{
		outfile.seekp(4);
		outfile << bNum;
		outfile.seekp(16);

		outfile << name;
		outfile.seekp(28);

		outfile << address;
		outfile.seekp(45);

		outfile << phoneNum;
		outfile.seekp(60);

		outfile << email;
		outfile.seekp(87);

		outfile << days;

		outfile.close();
	}
	else
	{
		std::cout << "Not open!!! We can't write test.txt" << '\n';
	}
	// testRead open as a read mode
	// writeData open as a write mode
	std::fstream testRead;
	testRead.open(testFolder, std::ios::in);
	std::fstream writeData;
	writeData.open(databaseFolder, std::ios::out | std::ios::app);
	// Check both file is open or not.
	if (testRead.is_open())
	{
		// get text from testRead
		std::getline(testRead, line);
	}
	else
	{
		std::cout << "Not Open Test" << '\n';
	}

	if (writeData.is_open())
	{
		// write from testRead to database
		writeData << line << "\n";
	}
	else
	{
		std::cout << "Not Open Database" << '\n';
	}
	// Both files is close here.
	writeData.close();
	testRead.close();
}

void c_fstream::f_read()
{
	std::string line;
	std::ifstream myFile;
	myFile.open(databaseFolder);

	if (myFile.is_open()) {
		while (std::getline(myFile, line))
		{
			std::cout << line << '\n';
		}
	}
	else
	{
		std::cout << "Not Open!" << '\n';
	}
	myFile.close();
}

void c_fstream::f_delete()
{
	std::string line;
	std::vector<std::string> v;
	int i = 0;
	int num;

	std::fstream outfile;
	outfile.open(databaseFolder, std::ios::in);

	while (std::getline(outfile, line))
	{
		std::cout << "Enter " << i << ":" << line << '\n';
		v.push_back(line);
		i++;
	}

	if (outfile.is_open())
	{
		std::cin >> num;

		if (num < v.size())
			v.erase(v.begin() + num, v.begin() + (num + 1));

		outfile.close();

		std::fstream re_write;
		re_write.open(databaseFolder, std::ios::out);
		for (int i = 0; i < v.size(); i++)
			re_write << v[i] << '\n';
		re_write.close();
	}
}

void c_fstream::f_search()
{

}