#include "ClapTrap.hpp"

int	main()
{
	ClapTrap A("Messi");
	ClapTrap B("Ronaldo");

	B.attack(A.getName());
	A.takeDamage(B.getAttack());
	A.beRepaired(7);
	B.setAttack(4);
	B.attack(A.getName());
	A.takeDamage(B.getAttack());
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	B.attack(A.getName());
	A.takeDamage(B.getAttack());
	std::cout << A << std::endl;
	std::cout << B << std::endl;
}
