/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:44:10 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 12:44:25 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "replace.hpp"

int main (int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./Replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	if (std::string(av[2]).empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}
	replace(av[1], av[2], av[3]);
	return (0);
}