/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:43:31 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 12:43:55 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string human) : _nameB(human), _pvtWpB(NULL)
{
    std::cout << "Human B: " << _nameB << std::endl;
}

HumanB::~HumanB(void)
{
        std::cout << "HumanB have been destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon& type)
{
	this->_pvtWpB = &type;
}

void HumanB::attack(void)
{
        std::cout << _nameB << " attacks with " << _pvtWpB->getType() << std::endl;
}
