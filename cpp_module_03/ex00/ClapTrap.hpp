#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ref);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap& ref);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName() const;
	int			getHp() const;
	int			getEp() const;
	int			getAttack() const;
	void		setAttack(int attack);
	void		setHp(int hp);
	void		setEp(int ep);
};

std::ostream& operator<<(std::ostream& os, ClapTrap& ref);

#endif
