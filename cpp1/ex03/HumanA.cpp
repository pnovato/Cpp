#include "Weapon.hpp"

HumanA::HumanA(void)
{
	std::cout << "HumanA has been created" << std::cout;
}

Weapon HumanA::HumanA(std::string human, Weapon something) : _pvtWpA(human), _nameA(something)
{
	std::cout << "Human A: " << _nameA << " has a " << _pvtWpA << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA have been destroyed" << std::endl;
}

void Weapon::attack(void)
{
	std::cout << _nameA << " attacks with " << _pvtWpA << std::endl;
}
