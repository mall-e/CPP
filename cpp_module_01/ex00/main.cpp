#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("First Zombie");
	zombie->announce();
	delete(zombie);
	randomChump("Second Zombie");
	return (0);
}
