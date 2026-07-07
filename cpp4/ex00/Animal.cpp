/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:25:51 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:27:09 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal & src) : _type(src._type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & rhs)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Some generic animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}