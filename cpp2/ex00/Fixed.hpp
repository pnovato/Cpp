/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:45:11 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 12:46:24 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src); //[COPY CONSTRUCTOR] cria novo objeto a partir de outro ex: [Fixed b(a)];
		Fixed & operator = (Fixed const & rhs); //[COPY ASSIGNMENT ]copia um objeto para outro ex: [c = a];
		~Fixed(void);
		int getRawBits(void) const;
		void setRawBits(int value);
	private:
		int _value;
		static const int _bits = 8;
};

#endif