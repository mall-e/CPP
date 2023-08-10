#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setAttack(20);
	this->guard_mode = false;
}

ScavTrap::ScavTrap(std::string _name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->setName(_name);
	this->setHp(100);
	this->setEp(50);
	this->setAttack(20);
	this->guard_mode = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap Coppy Constructor Called" << std::endl;
	*this = rhs;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap Coppy Assignment Constructor Called" << std::endl;
	this->setName(rhs.getName());
	this->setHp(rhs.getHp());
	this->setEp(rhs.getEp());
	this->setAttack(rhs.getAttack());
	this->guard_mode = rhs.guard_mode;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap attack called" << std::endl;
	ClapTrap::attack(target);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->guard_mode)
		std::cout << "\033[31m" << this->getName() << "'s Guard Mode active don't take any damage" << "\033[0m" << std::endl;
	else
		ClapTrap::takeDamage(amount);
}

void	ScavTrap::guardGate()
{
	if (this->guard_mode)
		std::cout << "\033[32m" << this->getName() << " activated Guard Mode" << "\033[0m" << std::endl;
	else
		std::cout << "\033[35m" << this->getName() << " not activated Guard Mode" << "\033[0m" << std::endl;
}

void	ScavTrap::changeGuardMode(bool tf)
{
	this->guard_mode = tf;
}
