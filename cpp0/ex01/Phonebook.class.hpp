#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP
#include <iostream>
#include "Contact.class.hpp"

class Phonebook
{
public:
	Phonebook(void);
	~Phonebook(void);
	void addContact();
	void printArray();
	// std::string searchContact();
	// std::string parseString(std::string input);
	Contact getContact(int index);
	std::string inputTrimmer(std::string &input);
	void exit();

private:
	Contact _contacts[8];
	int _nextIndex;
	int _count;
};

#endif
