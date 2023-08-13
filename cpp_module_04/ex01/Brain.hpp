#ifndef BRAINS_HPP
#define BRAINS_HPP

#include <iostream>

class Brain{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain& ref);
    ~Brain();

    Brain&	operator=(const Brain& ref);

    const std::string&	getIdeas(int i);
};

#endif