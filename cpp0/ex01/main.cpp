/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 15:07:12 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/21 15:07:13 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iomanip>

int main()
{
	Phonebook phonebookInstance;

	while (true)
	{
		std::string command;
		std::cout << "Enter a command: " << std::endl;
		getline(std::cin, command);
		if (command == "ADD")
			phonebookInstance.addContact();
		else if (command == "SEARCH")
			phonebookInstance.searchContact();
		else if (command == "EXIT")
			break;
		else
		{
			std::cout << "Invalid command" << std::endl;
			std::cout << "Try: ADD, SEARCH OR EXIT" << std::endl;
		}
	}
	return (0);
}
