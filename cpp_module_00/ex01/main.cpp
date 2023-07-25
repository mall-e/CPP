/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muyazici <muyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:45:07 by muyazici          #+#    #+#             */
/*   Updated: 2023/07/25 16:36:41 by muyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Add(PhoneBook *pb)
{
	std::string input;
	pb->counter = pb->counter % 8;
    if(pb->filled < 8) {
        pb->filled++;
    }
    std::cout << "\033[1;92mPerson Informations\033[0m" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, input);
	pb->contacts[pb->counter].setName(input);
    std::cout << "Surname: ";
    std::getline(std::cin, input);
	pb->contacts[pb->counter].setsurName(input);
    std::cout << "Nickname: ";
    std::getline(std::cin, input);
	pb->contacts[pb->counter].setnickName(input);
    std::cout << "Phone Number: ";
    std::getline(std::cin, input);
	pb->contacts[pb->counter].setnum(input);
    std::cout << "Secret: ";
    std::getline(std::cin, input);
	pb->contacts[pb->counter].setsecret(input);
    if (pb->contacts[pb->counter].getName().empty() || pb->contacts[pb->counter].getsurName().empty() || pb->contacts[pb->counter].getnickName().empty())
	{
		return ;
	}
    pb->counter++;
}

void	Search(PhoneBook *pb)
{
	int	i = 0;
	int	controller;
	std::string separator = "*-----------------------------------------------*\n";
	std::string filler;
	Contact c;

	if (std::cin.eof() == 1)
		exit(0);
	if (pb->filled == 0)
	{
		std::cout << "\033[1;91mList is empty!\033[0m" << std::endl;
		return ;
	}
	std::cout << "\033[1;92mList Of Contacts\033[0m" << std::endl;
	while (pb->filled > i)
	{
		std::cout << separator
            << "| " << std::right << std::setw(10) << i + 1
            << "| " << std::right << std::setw(10) << (pb->contacts[i].getName().length() > 10 ? pb->contacts[i].getName().substr(0,9) + '.' : pb->contacts[i].getName())
            << "| " << std::right << std::setw(10) << (pb->contacts[i].getsurName().length() > 10 ? pb->contacts[i].getsurName().substr(0,9) + '.' : pb->contacts[i].getsurName())
            << "| " << std::right << std::setw(10) << (pb->contacts[i].getnickName().length() > 10 ? pb->contacts[i].getnickName().substr(0,9) + '.' : pb->contacts[i].getnickName())
            << "| " << std::endl << separator;
            i++;
	}
	std::cout << "Enter person number: ";
	std::cin >> controller;
	if (controller > pb->filled || controller <= 0)
	{
		std::cout << "Invalid input" << std::endl;
		return ;
	}
	if (controller <= pb->filled && controller >= 1)
	{
		std::cout << "\033[1;95mInformation -> \033[0m" << controller <<std::endl;
		std::cout << "Name: " << pb->contacts[controller - 1].getName() << std::endl;
		std::cout << "SurName: " << pb->contacts[controller - 1].getsurName() << std::endl;
		std::cout << "Nickname: " << pb->contacts[controller - 1].getnickName() << std::endl;
		std::cout << "TelNumber: " << pb->contacts[controller - 1].getnum() << std::endl;
		std::cout << "DarkestSecret: " << pb->contacts[controller - 1].getsecret() << std::endl;
		std::cout << "\033[1;95m>-------------------------< \033[0m" << std::endl;
	}
	else
		std::cout << "We haven't been there yet" << std::endl;
}


int	main()
{
	PhoneBook pb;
	std::string str;

	pb.counter = 0;
	pb.filled = 0;
	std::cout << "Enter your command -> ADD, SEARCH, EXIT" << std::endl;
	std::cout << "Make your choice : ";
	while (std::getline(std::cin,str))
	{
		if (str.compare("ADD") == 0)
			Add(&pb);
		else if (str.compare("SEARCH") == 0)
			Search(&pb);
		else if (str.compare("EXIT") == 0)
		{
			std::cout << "\033[1;91mExited...\033[0m" << std::endl;
			exit(0);
		}
		else if (std::cin.eof() == 1)
		{
			std::cout << "^D " << std::endl;
			exit(0);
		}
		std::cout << "Enter your command -> ADD, SEARCH, EXIT" << std::endl;
		std::cout << "Make your choice : ";
	}
	return (0);
}
