#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool guard_mode;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ref);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& ref);

	void	guardGate();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	changeGuardMode(bool tf);
};

#endif
