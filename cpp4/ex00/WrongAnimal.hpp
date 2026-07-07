/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:26:26 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 20:40:23 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>


class WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal & src);
        WrongAnimal & operator=(const WrongAnimal & rhs);
        virtual ~WrongAnimal();
        virtual void makeSound()const;
        std::string getType() const;
    protected:
        std::string _type;
};

#endif