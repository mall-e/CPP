#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
public:
	std::string name;
	std::string surName;
	std::string nickName;
	std::string	secret;
	std::string num;

	Contact(){};

	~Contact(){};
};

class PhoneBook
{
public:
	Contact contacts[8];
	int sayac;
	int filled;

	PhoneBook(){};

	~PhoneBook(){};
};

#endif
