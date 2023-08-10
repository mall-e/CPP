#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Claptrap default constructor called" << std::endl;
	this->energy_points = 10;
	this->hit_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	std::cout << "Claptrap name constructor called" << std::endl;
	this->energy_points = 10;
	this->hit_points = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ref;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << "Copy assignment called" << std::endl;
	this->name = ref.name;
	this->attack_damage = ref.attack_damage;
	this->energy_points = ref.energy_points;
	this->hit_points = ref.hit_points;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energy_points > 0 && this->hit_points > 0)
	{
		std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage \
				<< " points of damage!" << std::endl;
		std::cout << "ClapTrap attack called" << std::endl;
		this->energy_points--;
	}
	else
		std::cout << "You cant attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << this->name << " take " << amount << " damage" << std::endl;
		this->hit_points -= amount;
	}
	else
		std::cout << "You cant take damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points > 0 && this->energy_points > 0)
	{
		std::cout << this->name << " repaired " << amount << " hit points" << std::endl;
		this->hit_points += amount;
		this->energy_points--;
	}
	else
		std::cout << "You cant repair!" << std::endl;
}

std::string	ClapTrap::getName() const
{
	return (this->name);
}

int	ClapTrap::getEp() const
{
	return (this->energy_points);
}
int	ClapTrap::getHp() const
{
	return (this->hit_points);
}
int	ClapTrap::getAttack() const
{
	return (this->attack_damage);
}

void	ClapTrap::setName(std::string name)
{
	this->name = name;
}

void	ClapTrap::setAttack(int attack)
{
	this->attack_damage = attack;
}

void	ClapTrap::setHp(int hp)
{
	this->hit_points = hp;
}

void	ClapTrap::setEp(int ep)
{
	this->energy_points = ep;
}

std::ostream& operator<<(std::ostream& os, ClapTrap& ref)
{
    os << "\033[34m"
       << "Name\t\t:" << ref.getName() << std::endl
       << "HitPoints\t:" << ref.getHp() << std::endl
       << "EnergyPoint\t:" << ref.getEp() << std::endl
       << "AttackDamage\t:" << ref.getAttack()
       << "\033[0m"
       << std::endl;
    return os;
}

