/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 14:52:54 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/21 14:52:55 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.class.hpp"

Phonebook::Phonebook(void) : _nextIndex(0), _count(0)
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
void Phonebook::searchContact() const
{
	std::string index;
	int indexInt;
	if (this->_count == 0)
	{
		std::cout << "List of contacts is empty!" << std::endl;
		return;
	}
	for (int i = 0; i < this->_count; i++)
	{
		std::cout << "|" << std::setw(10) << i
				  << "|" << std::right << std::setw(10) << inputTrimmer(this->_contacts[i].getFirstName())
				  << "|" << std::right << std::setw(10) << inputTrimmer(this->_contacts[i].getLastName())
				  << "|" << std::right << std::setw(10) << inputTrimmer(this->_contacts[i].getNickName())
				  << "|" << std::endl;
	}
	while (index.empty())
	{
		std::cout << "Choose a Contact: ";
		getline(std::cin, index);
	}
	indexInt = std::atoi(index.c_str());
	if (indexInt < 0 || indexInt >= _count)
		std::cout << "Invalid index" << std::endl;
	else
	{
		std::cout << "==CONTACT INFO==" << std::endl;
		std::cout << "First Name: " << this->_contacts[indexInt].getFirstName() << std::endl;
		std::cout << "Last Name: " << this->_contacts[indexInt].getLastName() << std::endl;
		std::cout << "NickName: " << this->_contacts[indexInt].getNickName() << std::endl;
		std::cout << "Darkest Secret: " << this->_contacts[indexInt].getDarkSecret() << std::endl;
		std::cout << "Phone Number: " << this->_contacts[indexInt].getPhoneNumber() << std::endl;
		std::cout << "================" << std::endl;
	}
}

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
		firstName = inputTrimmer(firstName);
	}
	while (lastName.empty())
	{
		std::cout << "Last name: ";
		getline(std::cin, lastName);
		lastName = inputTrimmer(lastName);
	}
	while (nickName.empty())
	{
		std::cout << "Nickname: ";
		getline(std::cin, nickName);
		nickName = inputTrimmer(nickName);
	}
	while (darkSecret.empty())
	{
		std::cout << "Dark secret: ";
		getline(std::cin, darkSecret);
		darkSecret = inputTrimmer(darkSecret);
	}
	while (phoneNumber.empty())
	{
		std::cout << "Phone number: ";
		getline(std::cin, phoneNumber);
		phoneNumber = inputTrimmer(phoneNumber);
	}
	this->_contacts[this->_nextIndex].setFirstName(firstName);
	this->_contacts[this->_nextIndex].setLastName(lastName);
	this->_contacts[this->_nextIndex].setNickName(nickName);
	this->_contacts[this->_nextIndex].setDarkSecret(darkSecret);
	this->_contacts[this->_nextIndex].setPhoneNumber(phoneNumber);
	this->_nextIndex = (this->_nextIndex + 1) % 8;
	if (this->_count < 8)
		this->_count++;
}

std::string Phonebook::inputTrimmer(const std::string &input) const
{
	if (input.length() > 10)
		return input.substr(0, 9) + ".";
	return (input);
}
