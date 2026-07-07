/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:26:17 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 20:40:33 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "----- Wrong version -----" << std::endl;

    WrongAnimal* wrongMeta = new WrongAnimal();
    WrongAnimal* wrongCat = new WrongCat();

    wrongMeta->makeSound();
    wrongCat->makeSound(); //WrongAnimal sound, NO WrongCat's!

    delete wrongMeta;
    delete wrongCat;


    return 0;
}