#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "===== Array of Animals (Dog + Cat) =====" << std::endl;

    const int size = 6; // par, metade Dog, metade Cat
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    for (int i = 0; i < size; i++)
        animals[i]->makeSound();

    for (int i = 0; i < size; i++)
        delete animals[i]; // chama o destrutor certo pq Animal::~Animal() é virtual

    std::cout << "===== Deep copy test =====" << std::endl;

    Dog original;
    // TODO: usa o getBrain() (ou equivalente) pra setar uma ideia no brain do original

    Dog copy(original); // copy constructor

    // TODO: muda uma ideia só na copy
    // TODO: imprime a ideia do original e da copy no mesmo índice
    //       -> se forem diferentes, prova que a cópia é profunda

    return 0;
}