/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 13:25:50 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/28 15:58:45 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap;
	ClapTrap trap("Bob");
	ClapTrap copy(trap);
	clap = trap;
	//trap.takeDamage(100);
	trap.attack("zovao");
	trap.beRepaired(5);
	trap.takeDamage(100);
	trap.attack("zovao");
	return (0);
}