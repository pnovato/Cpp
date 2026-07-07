/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:28:20 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:28:20 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
    public:
        Brain();
        Brain(const Brain & src);
        Brain & operator=(const Brain & rhs);
        ~Brain();
        std::string getIdea( int x) const;
        void setIdea(const std::string & idea, int x);
    protected:
        std::string _ideas[100];
};

#endif