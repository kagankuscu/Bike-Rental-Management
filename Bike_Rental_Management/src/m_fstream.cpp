#include <iostream>
#include <fstream>
#include "..\include\m_fstream.h"
#include <vector>
#include <string>
#include <conio.h>
#include <sstream>
#include <Windows.h>
// set cursor position 
void c_fstream::gotoxy(int x, int y)//function used for cursor positioning
{
	COORD CR;
	CR.X = x;
	CR.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CR);
}
// here write to database
void  c_fstream::f_write(char* bNum, char* name, char* address, char* phoneNum, char* email, char* days)
{
	std::string line;
	// outfile open as a write mode
	// we write text to test.txt and specific place
	std::fstream outfile;
	outfile.open(testFolder, std::ios::out);

	if (outfile.is_open())
	{
		//outfile.seekp(4);
		outfile << bNum;
		//outfile.seekp(16);
		outfile << " ";
		outfile << name;
		//outfile.seekp(28);
		outfile << " ";
		outfile << address;
		//outfile.seekp(45);
		outfile << " ";
		outfile << phoneNum;
		//outfile.seekp(60);
		outfile << " ";
		outfile << email;
		//outfile.seekp(87);
		outfile << " ";
		outfile << days;

		outfile.close();
	}
	else { std::cout << "Not open!!! We can't write test.txt" << '\n'; }
	// testRead open as a read mode
	// writeData open as a write mode
	std::fstream testRead;
	testRead.open(testFolder, std::ios::in);
	std::fstream writeData;
	writeData.open(databaseFolder, std::ios::out | std::ios::app);
	// Check both file is open or not.
	if (testRead.is_open())
	{ // get text from testRead
		std::getline(testRead, line);
	}
	else
	{ std::cout << "Not Open Test" << '\n'; }

	if (writeData.is_open())
	{ // write from testRead to database
		writeData << line << "\n"; 
	}
	else { std::cout << "Not Open Database" << '\n'; }
	// Both files is close here.
	writeData.close();
	testRead.close();
}
// here return to us inside the database
void c_fstream::f_read()
{
	std::string line;
	std::ifstream myFile;
	myFile.open(databaseFolder);

	if (myFile.is_open()) { while (std::getline(myFile, line)) { std::cout << line << '\n'; } }
	else { std::cout << "Not Open!" << '\n'; }
	myFile.close();
}
// here delete information from the database
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
		int num1 = 1;
		std::cin >> num;
		num1 += num;
		if (num < v.size())
			v.erase(v.begin() + num, v.begin() + num1);

		outfile.close();

		std::fstream re_write;
		re_write.open(databaseFolder, std::ios::out);
		for (int i = 0; i < v.size(); i++)
			re_write << v[i] << '\n';
		re_write.close();
	}
}
// here it search to database
void c_fstream::f_search()
{
	std::string line, temp;
	std::vector<std::string> temp_vector,v;
	std::fstream outfile(databaseFolder, std::ios::in);
	if (outfile.is_open())
	{
		int q = 2;
		char bike_num[3];
		std::cout << "\tEnter bike number:\n";
		std::cin >> bike_num;
		// add to stream 
		while (std::getline(outfile, line))
		{
			temp_vector = c_fstream::parse_string(line);
			if (bike_num == temp_vector[0])
			{
				for (int i = 1; i < temp_vector.size(); i++)
				{
					gotoxy(1, q);
					std::cout << temp_vector[i];
					q++;
				}
			}

		}
	}
	else { std::cout << "Not Open database"; }
	char c = _getche();
}
// this function is going to work parse string 
std::vector <std::string> c_fstream::parse_string(std::string str)
{
	std::stringstream ss(str);
	std::vector<std::string> result;
	std::string temp;

	while (ss >> temp)
	{
		result.push_back(temp);
	}
	return result;
}
