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

void	Phonebook::addContact(std::string firstName, std::string lastName, std::string nickName, std::string darkSecret, int phoneNumber)
{
	if (_nextIndex >= 7 || _count >= 8)
	{
		_nextIndex = 0;
		_count = 0;
	}
	_contacts[_nextIndex].setFirstName(firstName);
	_contacts[_nextIndex].setLastName(lastName);
	_contacts[_nextIndex].setNickName(nickName);
	_contacts[_nextIndex].setDarkSecret(darkSecret);
	_contacts[_nextIndex].setPhoneNumber(phoneNumber);
	_count++;
}