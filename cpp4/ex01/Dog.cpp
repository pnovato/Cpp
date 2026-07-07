/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:28:34 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:28:34 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & src) : Animal(src)
{
    _brain = new Brain(*src._brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog & rhs)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        Animal::operator=(rhs);
        *_brain = *rhs._brain;
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
    return _brain;
}