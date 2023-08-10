#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\n\n\033[34m>---------------------------------------------<\033[0m\n\n";
	std::cout << "\n\n### TESTING FRAGTRAP ###\n" << std::endl;
	{
		ScavTrap *A = new ScavTrap("Messi");
		ClapTrap *B = new ScavTrap("Ronaldo");
		FragTrap *C = new FragTrap("Haaland");

		B->attack(A->getName());
		A->takeDamage(B->getAttack());

		A->beRepaired(7);

		B->attack(A->getName());
		A->takeDamage(B->getAttack());

		std::cout << *A << std::endl;
		std::cout << *B << std::endl;
		std::cout << *C << std::endl;

		A->changeGuardMode(true);
		A->guardGate();
		std::cout << "---------------------------" << std::endl;
		A->attack(B->getName());
		A->takeDamage(B->getAttack());
		B->attack(A->getName());
		B->takeDamage(A->getAttack());
		C->attack(B->getName());
		C->takeDamage(B->getAttack());
		A->attack(C->getName());
		A->takeDamage(C->getAttack());
		std::cout << "----------------------------" << std::endl;

		std::cout << *A << std::endl;
		std::cout << *B << std::endl;
		std::cout << *C << std::endl;

		A->changeGuardMode(false);
		A->guardGate();

		B->attack(A->getName());
		A->takeDamage(B->getAttack());
		C->highFivesGuys();
		delete A;
		delete B;
		delete C;
	}
	{
		std::cout << "\n\n\033[34m>---------------------------------------------<\033[0m\n\n";
		ClapTrap *A = new FragTrap("Messi");
		ClapTrap *B = new ScavTrap("Ronaldo");
		ClapTrap *C = new ClapTrap("Haaland");

		delete A;
		delete B;
		delete C;
	}
	return (0);
}
