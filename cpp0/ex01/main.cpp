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
