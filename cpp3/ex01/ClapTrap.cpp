/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 13:26:47 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/28 16:06:22 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hit(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap & ClapTrap::operator = (ClapTrap const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
	{
        this->_name = rhs._name;
		this->_hit = rhs._hit;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit == 0 || _energyPoints == 0)
	{
		std::cout << "Cannot Attack!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit == 0)
	{
		std::cout << "ClapTrap is dead!" << std::endl;
		return;
	}
	if (amount >= _hit)
		_hit = 0;
	else
		_hit -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage! HP: " << _hit << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit == 0 || _energyPoints == 0)
	{
		return;
	}
	_energyPoints--;
	_hit += amount;
	std::cout << "ClapTrap " << _name << " repaired itself for " << amount << " HP! HP: " << _hit << std::endl;
}