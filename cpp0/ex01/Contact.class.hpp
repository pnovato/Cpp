/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 15:06:28 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/21 15:06:32 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP
#include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getDarkSecret() const;
	std::string getPhoneNumber() const;
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