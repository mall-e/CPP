#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *brain;
public:
	Cat();
	Cat(const Cat& ref);
	~Cat();

	Cat& operator=(const Cat& ref);

	void	makeSound(void) const;
	std::string		getType(void) const;
    Brain& getBrain(void) const;
};
