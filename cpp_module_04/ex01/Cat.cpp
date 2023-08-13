#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor Called!" << std::endl;
	this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& rhs)
{
	std::cout << "Cat Coppy Constructor Called!" << std::endl;
	*this = rhs;
}

Cat::~Cat()
{
    delete this->brain;
	std::cout << "Cat Destructor Called!" << std::endl;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat Coppy Assignment Constructor Called!" << std::endl;
	this->type = rhs.type;
    *(this->brain) = *(rhs.brain);
    this->brain = new Brain(*rhs.brain);
	return (*this);
}

Brain& Cat::getBrain(void) const
{
    return (*this->brain);
}

std::string Cat::getType( void ) const
{
	return (type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowwwwwwwww!" << std::endl;
}
