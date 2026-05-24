#include "Contact.class.hpp"

Contact::Contact()
{
	std::cout << "Constructor called --> Contact" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Destructor called --> Contact" << std::endl;
}

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

std::string Contact::getLastName() const
{
	return this->_lastName;
}

std::string Contact::getNickName() const
{
	return this->_nickName;
}

std::string Contact::getDarkSecret() const
{
	return this->_darkSecret;
}

std::string Contact::getPhoneNumber() const
{
	return this->_phoneNumber;
}

void Contact::setFirstName(std::string _firstName)
{
	this->_firstName = _firstName;
}

void Contact::setLastName(std::string _lastName)
{
	this->_lastName = _lastName;
}

void Contact::setNickName(std::string _nickName)
{
	this->_nickName = _nickName;
}

void Contact::setDarkSecret(std::string _darkSecret)
{
	this->_darkSecret = _darkSecret;
}

void Contact::setPhoneNumber(std::string _phoneNumber)
{
	this->_phoneNumber = _phoneNumber;
}