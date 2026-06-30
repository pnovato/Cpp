#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat & rhs)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if (this != &rhs)
        WrongAnimal::operator=(rhs);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound()
{
    std::cout << "Meow (but wrong)!" << std::endl;
}