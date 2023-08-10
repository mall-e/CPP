#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
private:
	bool guard_mode;
public:
	FragTrap();
	FragTrap(std::string _name);
	FragTrap(const FragTrap& rhs);
	FragTrap&	operator=(const FragTrap& rhs);
	~FragTrap();

	void	guardGate();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	changeGuardMode(bool tf);
	void	highFivesGuys();
};

#endif
