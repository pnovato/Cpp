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

    // (seu teste de deep copy do ex01 aqui, sem mudanças)

    // Animal a; // <-- isso NÃO deve compilar mais. Descomenta pra confirmar o erro, depois comenta de novo.

    return 0;
}