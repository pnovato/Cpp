/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:29:44 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:29:45 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>


class Animal
{
    public:
        Animal();
        Animal(const Animal & src);
        Animal & operator=(const Animal & rhs);
        virtual ~Animal();
        virtual void makeSound() const = 0; //basta um pure virtual(= 0) para ser abstract 
        std::string getType() const;
    protected:
        std::string _type;
};

#endif