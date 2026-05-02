#include "Phonebook.class.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Constructor called --> Phonebook" << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called --> Phonebook" << std::endl;
	return;
}

Contact Phonebook::getContact(int index)
{
	return (index < 0 || index >= 7) ? Contact() : _contacts[index];
}

void addContact()
{
	Contact newContact;

	? ? logica para adicionar um contato
}