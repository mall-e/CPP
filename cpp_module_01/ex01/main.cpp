#include "Zombie.hpp"
#include <stdlib.h>

int main()
{
    Zombie *zombies = zombieHorde(10, "zartzurt");
    delete[] zombies;
    system();
    return (0);
}
