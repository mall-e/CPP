#include "Harl.hpp"

Harl::Harl()
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

Harl::~Harl(){}

void	Harl::debug()
{
	std::cout << "debug function" << std::endl;
}

void	Harl::info()
{
	std::cout << "info function" << std::endl;
}

void	Harl::warning()
{
	std::cout << "warning function" << std::endl;
}

void	Harl::error()
{
	std::cout << "error function" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i = -1;
	while (++i < 4){
		if (levels[i] == level)
			break;
	}
	switch (i)
	{
	case 0:
		Harl::debug();
	case 1:
		Harl::info();
	case 2:
		Harl::warning();
	case 3:
		Harl::error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
