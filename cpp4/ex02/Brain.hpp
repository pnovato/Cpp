#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain
{
    public:
        Brain();
        Brain(const Brain & src);
        Brain & operator=(const Brain & rhs);
        ~Brain();
        std::string getIdea( int x) const;
        void setIdea(const std::string & idea, int x);
    protected:
        std::string _ideas[100];
};

#endif