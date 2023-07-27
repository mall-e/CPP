#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String bellek adresi             :" << &str << std::endl;
    std::cout << "stringPTR tuttuğu bellek adresi  :" << stringPTR << std::endl;
    std::cout << "stringREF tuttuğu bellek adres   :" << &stringREF << std::endl;

    std::cout << ">------------------------------<" << std::endl;

    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}