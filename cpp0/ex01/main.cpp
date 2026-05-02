#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int main()
{
	Contact contactInstance;
	Phonebook phonebookInstance;

	std::string input;
	std::cout << "Digite seu Nome: " << std::endl;
	std::getline(std::cin, input);
	contactInstance.setFirstName(input);
	std::cout << "Contact first name is: " << contactInstance.getFirstName() << std::endl;

	for (int i = 0; i < 7; i++)
	{
		Contact c = phonebookInstance.getContact(i);
		std::cout << "Contato de phonebook [" << i << "]: "
				  << c.getFirstName() << " "
				  << c.getLastName() << " "
				  << std::endl
				  << std::endl;
	}

	return (0);
}
