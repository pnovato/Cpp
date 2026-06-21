/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 14:48:21 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/21 14:48:27 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int main(int ac, char **av)
{
	int	i;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			std::string argument = av[i];
			std::transform(argument.begin(), argument.end(), argument.begin(), toupper);	
			std::cout << argument;
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
