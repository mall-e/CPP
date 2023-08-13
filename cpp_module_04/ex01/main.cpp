#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const int count = 4;
    Animal	*animals[count];

    for (size_t i = 0; i < count; i++)
    {
        std::cout << "-----------------------------\n";
        if (i < count / 2)
            animals[i] = new Dog;
        else
            animals[i] = new Cat;
    }
    std::cout << "-----------------------------\n";
    for (size_t i = 0; i < count; i++)
    {
        animals[i]->makeSound();
        delete animals[i];
        std::cout << "-----------------------------\n";
    }
}
