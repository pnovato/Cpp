#include "Weapon.hpp"

HumanB::HumanB(void)
{
        std::cout << "HumanB has been created" << std::cout;
}

HumanB::HumanB(std::string human) : _nameB(something)
{
        std::cout << "Human B: " << _nameB << std::endl;
}

HumanB::~HumanB(void)
{
        std::cout << "HumanB have been destroyed" << std::endl;
}

void Weapon HumanB::setWeapon(Weapon type)
{
	this->_type = type;
}

void Weapon::attack(void)
{
        std::cout << _nameB << " attacks with " << _pvtWpB << std::endl;
}

