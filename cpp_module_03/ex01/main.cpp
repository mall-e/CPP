#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n\n\033[34m>---------------------------------------------<\033[0m\n\n";
	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	{
		ScavTrap *A = new ScavTrap("Messi");
		ClapTrap *B = new ScavTrap("Ronaldo");

		B->attack(A->getName());
		A->takeDamage(B->getAttack());

		A->beRepaired(7);

		B->attack(A->getName());
		A->takeDamage(B->getAttack());

		std::cout << *A << std::endl;
		std::cout << *B << std::endl;

		A->changeGuardMode(true);
		A->guardGate();
		std::cout << "---------------------------" << std::endl;
		A->attack(B->getName());
		B->attack(A->getName());
		std::cout << "----------------------------" << std::endl;
		A->takeDamage(B->getAttack());

		std::cout << *A << std::endl;
		std::cout << *B << std::endl;

		A->changeGuardMode(false);
		A->guardGate();

		B->attack(A->getName());
		A->takeDamage(B->getAttack());
		delete A;
		delete B;
	}
	{
		std::cout << "\n\n\033[34m>---------------------------------------------<\033[0m\n\n";
		ClapTrap *B = new ScavTrap("Ronaldo");
		ClapTrap *C = new ClapTrap("Haaland");

		delete B;
		delete C;
	}
	return (0);
}
