#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	this->setHp(100);
	this->setEp(100);
	this->setAttack(30);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->setName(_name);
	this->setHp(100);
	this->setEp(100);
	this->setAttack(30);
}


FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap Coppy Constructor Called" << std::endl;
	*this = rhs;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "ScavTrap Coppy Assignment Constructor Called" << std::endl;
	this->setName(rhs.getName());
	this->setHp(rhs.getHp());
	this->setEp(rhs.getEp());
	this->setAttack(rhs.getAttack());
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap attack called" << std::endl;
	ClapTrap::attack(target);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->guard_mode)
		std::cout << "\033[31m" << this->getName() << "'s Guard Mode active don't take any damage" << "\033[0m" << std::endl;
	else
		ClapTrap::takeDamage(amount);
}

void	FragTrap::guardGate()
{
	if (this->guard_mode)
		std::cout << "\033[32m" << this->getName() << " activated Guard Mode" << "\033[0m" << std::endl;
	else
		std::cout << "\033[35m" << this->getName() << " not activated Guard Mode" << "\033[0m" << std::endl;
}

void	FragTrap::changeGuardMode(bool tf)
{
	this->guard_mode = tf;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "HIGH FIVES GUYSSSSSSS!!!" << std::endl;
}

