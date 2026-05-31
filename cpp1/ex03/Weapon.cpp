#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon has been created" << std::endl;
}

Weapon::Weapon(std::string something) : _type(something)
{
	std::cout <<  "Weapon: " << _type << " has been created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon has been destoyed" << std::endl;
}

std::string Weapon::getType(void) const 
{
	return (_type);
}

void Weapon::setType(std::string newType)
{
	this->_type = newType;
}
