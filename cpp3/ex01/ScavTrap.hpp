/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 19:08:54 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/28 19:14:11 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
	public:
    	ScavTrap();
    	ScavTrap(std::string name);
    	ScavTrap(ScavTrap const & src);
    	ScavTrap & operator=(ScavTrap const & rhs);
    	~ScavTrap();
    	void attack(const std::string& target);
    	void guardGate();
};

#endif