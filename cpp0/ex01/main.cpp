#include "Phonebook.class.hpp"
#include "Contact.class.hpp"

int main ()
{
	Contact	instance1;
	Phonebook instance('a', 42, 4.2f);

	instance1.setFirstName("Patrick");
	std::cout << "Contact first name is: " << instance1.getFirstName() << std::endl;
		
	return (0);
}
