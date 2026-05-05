#include "Phonebook.class.hpp"
#include "Contact.class.hpp"
#include <iomanip>

int main()
{
	Contact contactInstance;
	Phonebook phonebookInstance;

	while (true)
	{
		std::string command;
		std::cout << "Enter a command: " << std::endl;
		getline(std::cin, command);
		if (command == "ADD")
			phonebookInstance.addContact();
		else if (command == "SEARCH")
		{
			phonebookInstance.searchContact();
			// std::cout << std::right << std::setw(20) << "searching" << std::endl;
			// break;
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}
