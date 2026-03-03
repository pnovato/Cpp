#include "Phonebook.class.hpp"

Phonebook::phonebook(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor called" << std::endl;
	std::cout << "char  p1: " << this->a1 << std::endl;
	std::cout << "int p2: " << this->a2 << std::endl;
	std::cout << "float p3: " << this->a3 << std::endl;
	return;
}

Phonebook::~phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
