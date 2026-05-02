#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <iostream>
#include "Contact.class.hpp"

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);
	void	addContact(std::string firstName, std::string lastName, std::string nickName, std::string darkSecret, int phoneNumber);
	std::string searchContact();
	Contact getContact(int index);
	void exit();

private:
	Contact _contacts[8];
	int _nextIndex;
	int _count;
};

#endif
