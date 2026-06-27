/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:41:02 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 13:06:09 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *heapZombie = newZombie("Heap");
	heapZombie->announce();

	Zombie zombie("Foo");
	zombie.announce();

	randomChump("Bar");
	delete heapZombie;
	return (0);
}
