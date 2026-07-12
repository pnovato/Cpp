#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& src);
        Bureaucrat& operator=(const Bureaucrat& rhs);
        ~Bureaucrat();

        class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char* typeOfException() const throw(); 
        };
        class GradeTooLowException
        {
            public:
                virtual const char* typeOfException() const throw();
        };
        const std::string getName() const;
        int getGrade();
        void increment(int grade);
        void decrement(int grade);
};



#endif