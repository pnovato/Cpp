#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <iostream>
# include "Contact.class.hpp"

class Phonebook
{
public:
	
	Phonebook(void);
	~Phonebook(void);
	void	addContact();
	std::string	searchContact();
	void	exit();

private:
	
	Contact	_contacts[7];
	int	_nextIndex;
	int	_count;
};

#endif
