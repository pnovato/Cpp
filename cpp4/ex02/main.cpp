/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 19:30:51 by pnovato-          #+#    #+#             */
/*   Updated: 2026/07/01 20:12:17 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "===== Array of Animals (Dog + Cat) =====" << std::endl;

    const int size = 6;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "===== Deep copy test =====" << std::endl;

    Dog original;
    original.getBrain()->setIdea("I love bones", 0);

    Dog copy(original);
    copy.getBrain()->setIdea("I love bones", 0);

    std::cout << "original idea[0]: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "copy idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;

    std::cout << "===== Abstract class test =====" << std::endl;
    // Animal a; // <-- isso NÃO deve compilar mais

    return 0;
}