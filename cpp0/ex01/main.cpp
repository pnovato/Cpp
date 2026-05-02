#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int main()
{
	Contact contactInstance;
	Phonebook phonebookInstance;

	std::string inputName;
	std::string inputLastName;

	for (int i = 0; i < 7; i++)
	{
		Contact c = phonebookInstance.getContact(i);
		std::cout << "Digite seu Nome: " << std::endl;
		std::getline(std::cin, inputName);
		std::cout << "Digite seu Sobrenome: " << std::endl;
		std::getline(std::cin, inputLastName);
		contactInstance.setFirstName(inputName);
		contactInstance.setLastName(inputLastName);

		std::cout << "Contact first name is: " << contactInstance.getFirstName() << std::endl;
		std::cout << "Contact last name is: " << contactInstance.getLastName() << std::endl;

		c.addContact(inputName, inputLastName);
	}

	return (0);
}
