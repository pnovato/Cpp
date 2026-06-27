/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:42:07 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 12:42:36 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 5;
	Zombie chump("vaca");
	Zombie* zombie = zombieHorde(N, "tirulipa");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;
	
	return (0);
}
