#include "Zombie.hpp"
#include <stdlib.h>

int main()
{
    Zombie *zombies = zombieHorde(10, "zartzurt");
    delete[] zombies;
    return (0);
}
