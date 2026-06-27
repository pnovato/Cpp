/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:42:35 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 15:49:21 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int raw)
{
    this->_value = raw;
}

Fixed::Fixed(const int num)
{
  std::cout << "Int constructor called" << std::endl;
  this->_value = num << this->_bits;
}

Fixed::Fixed(const float num)
{
  std::cout << "Float constructor called" << std::endl;
  this->_value = roundf(num * (1 << this->_bits));
}

int Fixed::toInt(void) const
{
  return (this->_value >> this->_bits);
}

float Fixed::toFloat(void) const
{
  return ((float)this->_value / (1 << this->_bits));
}


std::ostream& operator<<(std::ostream& out, Fixed const & fixed)
{
  out << fixed.toFloat();
  return (out);
}