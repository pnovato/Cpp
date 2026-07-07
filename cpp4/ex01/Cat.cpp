/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:28:25 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:28:25 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type =  "Cat";
    _brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat & src) : Animal(src)
{
    _brain = new Brain(*src._brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        Animal::operator=(rhs);
        *_brain = *rhs._brain;
    }
    return (*this);
}

Cat::~Cat() 
{
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" <<std::endl;
}

Brain* Cat::getBrain() const
{
    return _brain;
}