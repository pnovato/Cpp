/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 12:44:40 by pnovato-          #+#    #+#             */
/*   Updated: 2026/06/27 12:44:53 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>	

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void complain( std::string level );
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif