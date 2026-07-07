/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:26:09 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:26:10 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(src)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &rhs)
        Animal::operator=(rhs);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
}