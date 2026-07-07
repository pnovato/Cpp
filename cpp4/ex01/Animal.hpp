/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:28:05 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 19:28:06 by pnovato-         ###   ########.fr       */
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
        virtual void makeSound() const;
        std::string getType() const;
    protected:
        std::string _type;
};

#endif