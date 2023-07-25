/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:45:15 by muyazici          #+#    #+#             */
/*   Updated: 2023/07/25 16:21:07 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string name;
	std::string surName;
	std::string nickName;
	std::string	secret;
	std::string num;

public:
	Contact(){};
	~Contact(){};
	void setName(std::string gname){name = gname;}
	void setsurName(std::string gsurName){surName = gsurName;}
	void setnickName(std::string gnickName){nickName = gnickName;}
	void setsecret(std::string gsecret){secret = gsecret;}
	void setnum(std::string gnum){num = gnum;}
	std::string getName(){return name;}
	std::string getsurName(){return surName;}
	std::string getnickName(){return nickName;}
	std::string getsecret(){return secret;}
	std::string getnum(){return num;}
};

class PhoneBook
{
public:
	Contact contacts[8];
	int counter;
	int filled;

	PhoneBook(){};

	~PhoneBook(){};
};

#endif
