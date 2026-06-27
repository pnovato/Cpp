/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:43:23 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 12:43:57 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string human, Weapon& weapon) : _nameA(human), _pvtWpA(weapon)
{
	std::cout << "Human A: " << _nameA << " has a " << _pvtWpA.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA have been destroyed" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << _nameA << " attacks with " << _pvtWpA.getType() << std::endl;
}
