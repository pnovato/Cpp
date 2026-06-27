/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:58:49 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 16:02:46 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Fixed.hpp"

Fixed::Fixed()
{
  this->_value = 0;
}

Fixed::Fixed(const Fixed &original)
{
  *this = original;
}

Fixed&  Fixed::operator= (const Fixed& original)
{
  if (this != &original)
  {
    this->_value = original.getRawBits();
  }
  return (*this);
}

Fixed::Fixed(const int num)
{
  this->_value = num << this->_bits;
}

Fixed::Fixed(const float num)
{
  this->_value = roundf(num * (1 << this->_bits));
}

Fixed::~Fixed()
{
}

bool  Fixed::operator > (const Fixed& original) const
{
  return (this->_value > original.getRawBits());
}

bool  Fixed::operator < (const Fixed& original) const
{
  return (this->_value < original.getRawBits());
}

bool  Fixed::operator >= (const Fixed& original) const
{
  return (this->_value >= original.getRawBits());
}

bool  Fixed::operator <= (const Fixed& original) const
{
  return (this->_value <= original.getRawBits());
}

bool  Fixed::operator == (const Fixed& original) const
{
  return (this->_value == original.getRawBits());
}

bool  Fixed::operator != (const Fixed& original) const
{
  return (this->_value != original.getRawBits());
}

Fixed Fixed::operator + (const Fixed& original) const
{
  Fixed NewPoint;
  
  NewPoint.setRawBits(this->getRawBits() + original.getRawBits());
  return (NewPoint);
}

Fixed Fixed::operator - (const Fixed& original) const
{
  Fixed NewPoint;
  
  NewPoint.setRawBits(this->getRawBits() - original.getRawBits());
  return (NewPoint);
}

Fixed Fixed::operator * (const Fixed& original) const
{
  Fixed NewPoint;
  long long result;
  
  result = (long long)this->_value * (long long)original.getRawBits();
  result = result >> this->_bits;
  NewPoint.setRawBits((int)result);
  return (NewPoint);
}

Fixed& Fixed::operator ++ (void)
{
	this->_value++;
	return (*this);
}
Fixed Fixed::operator ++ (int)
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits());

	this->_value++;
	return (newfixed);
}

Fixed& Fixed::operator -- (void)
{
	this->_value--;
	return (*this);
}
Fixed Fixed::operator -- (int)
{
	Fixed newfixed;

	newfixed.setRawBits(this->getRawBits());

	this->_value--;
	return (newfixed);
}

Fixed& Fixed::min(Fixed& p1, Fixed& p2)
{
  if (p1 > p2) {
    return (p2);
  }
  return (p1);
}

Fixed& Fixed::max(Fixed& p1, Fixed& p2)
{
  if (p1 > p2) {
    return (p1);
  }
  return (p2);
}

const Fixed& Fixed::min(const Fixed& p1, const Fixed& p2)
{
  if (p1 > p2) {
    return (p2);
  }
  return (p1);
}

const Fixed& Fixed::max(const Fixed& p1, const Fixed& p2)
{
  if (p1 > p2) {
    return (p1);
  }
  return (p2);
}
Fixed Fixed::operator / (const Fixed& original) const
{
  Fixed NewPoint;
  long long dividend;
  
  dividend = ((long long)this->_value << this->_bits);
  NewPoint.setRawBits((int)(dividend / original.getRawBits()));
  return (NewPoint);
}

int Fixed::getRawBits(void) const
{
  return (this->_value);
}

void  Fixed::setRawBits(int const raw)
{
  this->_value = raw;
}

int Fixed::toInt(void) const
{
  return (this->_value >> this->_bits);
}

float Fixed::toFloat(void) const
{
  return ((float)this->_value / (1 << this->_bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& f)
{
  out << f.toFloat();
  return (out);
}