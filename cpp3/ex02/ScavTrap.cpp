/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:12:17 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/28 19:19:33 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hit = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap() { std::cout << "Default Scav Constructor called!" << std::endl; }

ScavTrap::~ScavTrap() { std::cout << "Scav Destructor called!" << std::endl; }

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Scav Copy constructor called" << std::endl;
    *this = src;
}

ScavTrap & ScavTrap::operator = (ScavTrap const & rhs)
{
	std::cout << "Scav Copy assignment operator called" << std::endl;
    if (this != &rhs)
        ClapTrap::operator=(rhs);
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energyPoints == 0 || this->_hit <= 0)
        std::cout << "Scav "<< this->_name << "could not attack! Not enough energy or hit points." << std::endl;
    else
    {
        std::cout << "Scav " << this->_name << " attacked " << target << " causing " << this->_attackDamage << " of damage!" << std::endl;
        this->_energyPoints -= 1;
    }
} 

void ScavTrap::guardGate()
{
     std::cout << "Scav " << this->_name << " is guarding the gate!" << std::endl;
}

std::string ScavTrap::getName()
{
    return(this->_name);
}

unsigned int ScavTrap::getHit()
{
    return(this->_hit);
}

unsigned int ScavTrap::getAttackDamage()
{
    return(this->_attackDamage);
}

int ScavTrap::getEnergyPoints()
{
    return(this->_energyPoints);
}