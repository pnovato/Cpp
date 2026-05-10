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

/* std::string Phonebook parseString(std::string input)
{
	std::string value;
	if (input.str)
} */

void Phonebook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string darkSecret;
	std::string phoneNumber;
	std::cout << "Adding contact" << std::endl;
	while (firstName.empty())
	{
		std::cout << "First name: ";
		getline(std::cin, firstName);
		inputTrimmer(firstName);
	}
	while (lastName.empty())
	{
		std::cout << "Last name: ";
		getline(std::cin, lastName);
		inputTrimmer(lastName);
	}
	while (nickName.empty())
	{
		std::cout << "Nickname: ";
		getline(std::cin, nickName);
		inputTrimmer(nickName);
	}
	while (darkSecret.empty())
	{
		std::cout << "Dark secret: ";
		getline(std::cin, darkSecret);
		inputTrimmer(darkSecret);
	}
	while (phoneNumber.empty())
	{
		std::cout << "Phone number: ";
		getline(std::cin, phoneNumber);
		inputTrimmer(phoneNumber);
	}
	_contacts[_nextIndex].setFirstName(firstName);
	_contacts[_nextIndex].setLastName(lastName);
	_contacts[_nextIndex].setNickName(nickName);
	_contacts[_nextIndex].setDarkSecret(darkSecret);
	_contacts[_nextIndex].setPhoneNumber(phoneNumber);
	_nextIndex = (_nextIndex + 1) % 8;
	if (_count < 8)
		_count++;
	printArray();
}

std::string Phonebook::inputTrimmer(std::string &input)
{
	if (input.length() > 10)
		return input.substr(0, 9) + ".";
	return (input);
}

void Phonebook::printArray()
{
	for (int i = 0; i < _count; i++)
	{
		std::cout << this->_contacts[i].getFirstName();
		std::cout << this->_contacts[i].getLastName();
		std::cout << this->_contacts[i].getNickName();
		std::cout << this->_contacts[i].getDarkSecret();
		std::cout << this->_contacts[i].getPhoneNumber();
	}
}