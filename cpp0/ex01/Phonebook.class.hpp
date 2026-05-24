#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <iostream>
#include "Contact.class.hpp"
#include <iomanip>

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);
	void addContact();
	void searchContact() const;
	void exit();
	Contact getContact(int index);
	std::string inputTrimmer(const std::string &input) const;

private:
	Contact _contacts[8];
	int _nextIndex;
	int _count;
};

#endif
