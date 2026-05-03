#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);

	// int	getContact();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getDarkSecret();
	std::string getPhoneNumber();
	void setFirstName(std::string _firstName);
	void setLastName(std::string _lastName);
	void setNickName(std::string _nickName);
	void setDarkSecret(std::string _darkSecret);
	void setPhoneNumber(std::string _phoneNumber);

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _darkSecret;
	std::string _phoneNumber;
};

#endif
