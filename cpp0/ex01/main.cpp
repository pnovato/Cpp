#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int main ()
{
	Contact	instance1;
	Phonebook instance;

	for (int  i = 0; i < 8;  i++)
		std::cout << "Contatos de phonebook: "<< instance.contacts[i] << std::endl;
	
	std::string input;
	std::getline(std::cin, input);
	instance1.setFirstName(input);
	std::cout << "Contact first name is: " << instance1.getFirstName() << std::endl;
		
	return (0);
}
