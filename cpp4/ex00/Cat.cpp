/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:26:02 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:26:51 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type =  "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat & src) : Animal(src)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(const Cat & rhs)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &rhs)
        Animal::operator=(rhs);
    return (*this);
}

Cat::~Cat() 
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" <<std::endl;
}