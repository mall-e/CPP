#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor Called!" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& rhs)
{
	std::cout << "Dog Coppy Constructor Called!" << std::endl;
	*this = rhs;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called!" << std::endl;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog Coppy Assignment Constructor Called!" << std::endl;
	this->type = rhs.type;
	return (*this);
}

std::string Dog::getType( void ) const
{
	return (type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Hav Hav Hav!" << std::endl;
}
