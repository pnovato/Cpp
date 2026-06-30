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