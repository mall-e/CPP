#include "phonebook.hpp"

void	Add(PhoneBook *pb)
{
	pb->sayac = pb->sayac % 8;
    if(pb->filled < 8) {
        pb->filled++;
    }
    std::cout << "\033[1;92mPerson Informations\033[0m" << std::endl;
    std::cout << "Name: ";
    std::getline(std::cin, pb->contacts[pb->sayac].name);
    std::cout << "Surname: ";
    std::getline(std::cin, pb->contacts[pb->sayac].surName);
    std::cout << "Nickname: ";
    std::getline(std::cin, pb->contacts[pb->sayac].nickName);
    std::cout << "Phone Number: ";
    std::getline(std::cin, pb->contacts[pb->sayac].num);
    std::cout << "Secret: ";
    std::getline(std::cin, pb->contacts[pb->sayac].secret);
    if (pb->contacts[pb->sayac].name.empty() || pb->contacts[pb->sayac].surName.empty() || pb->contacts[pb->sayac].nickName.empty())
        return ;
    pb->sayac++;
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
            << "| " << std::right << std::setw(10) << (pb->contacts[i].name.length() > 10 ? pb->contacts[i].name.substr(0,9) + '.' : pb->contacts[i].name)
            << "| " << std::right << std::setw(10) << (pb->contacts[i].surName.length() > 10 ? pb->contacts[i].surName.substr(0,9) + '.' : pb->contacts[i].surName)
            << "| " << std::right << std::setw(10) << (pb->contacts[i].nickName.length() > 10 ? pb->contacts[i].nickName.substr(0,9) + '.' : pb->contacts[i].nickName)
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
		std::cout << "Name: " << pb->contacts[controller - 1].name << std::endl;
		std::cout << "SurName: " << pb->contacts[controller - 1].surName << std::endl;
		std::cout << "Nickname: " << pb->contacts[controller - 1].nickName << std::endl;
		std::cout << "TelNumber: " << pb->contacts[controller - 1].num << std::endl;
		std::cout << "DarkestSecret: " << pb->contacts[controller - 1].secret << std::endl;
		std::cout << "\033[1;95m>-------------------------< \033[0m" << std::endl;
	}
	else
		std::cout << "We haven't been there yet" << std::endl;
}


int	main()
{
	PhoneBook pb;
	std::string str;

	pb.sayac = 0;
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
