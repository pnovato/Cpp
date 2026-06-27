/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 14:49:08 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 15:42:03 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed & operator = (Fixed const & rhs);
		~Fixed(void);
		Fixed (int const val);
		Fixed (float const val);
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int value);
	private:
		int _value;
		static const int _bits = 8;
};

std::ostream & operator<<(std::ostream & out, Fixed const & fixed);

#endif