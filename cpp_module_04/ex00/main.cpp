#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << "Animal type : " << dog->getType() << std::endl;
	std::cout << "Animal type : " << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();

	delete animal;
	delete dog;
	delete cat;
}
