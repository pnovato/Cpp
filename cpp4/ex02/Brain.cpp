#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain & Brain::operator=(const Brain & rhs)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = rhs._ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(const std::string & idea, int x)
{
    if (index >= 0 && index < 100)
        _ideas[index] = idea;
}

std::string Brain::getIdea(int x) const
{
    if (index >= 0 && index < 100)
        return _ideas[index];
    return "";
}