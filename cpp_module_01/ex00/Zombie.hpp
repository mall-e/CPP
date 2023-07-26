#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string Name;
	public:
		void announce( void );
		Zombie(std::string name){Name = name;};
		void setName(std::string name){Name = name;};
		Zombie(){};
		~Zombie(){std::cout << Name << " died."<< std::endl;};

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
