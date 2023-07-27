#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(10, "zartzurt");
    delete[] zombies;
    return (0);
}