/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:28:16 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:28:17 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain & Brain::operator=(const Brain & rhs)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = rhs._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(const std::string & idea, int x)
{
    if (x >= 0 && x < 100)
        _ideas[x] = idea;
}

std::string Brain::getIdea(int x) const
{
    if (x >= 0 && x < 100)
        return _ideas[x];
    return "";
}