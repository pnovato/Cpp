#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hit = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructed!" << std::endl;
}

FragTrap::FragTrap() { std::cout << "Default Frag Constructor called!" << std::endl; }

FragTrap::~FragTrap() { std::cout << "Frag Destructor called!" << std::endl; }

FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "Frag Copy constructor called" << std::endl;
    *this = src;
}

FragTrap & FragTrap::operator = (FragTrap const & rhs)
{
	std::cout << "Frag Copy assignment operator called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "Frag " << this->_name << " wanna High Five!" << std::endl;
}