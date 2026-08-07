#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& src);
        Bureaucrat& operator=(const Bureaucrat& rhs);
        ~Bureaucrat();
		void signForm();

        class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char* what() const throw();  //funcao herdada da classe exception que pode ser modificada, pq tem assinatura virtual
                //Throw so lanca objetos!!
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        const std::string getName() const;
        int getGrade() const;
        void increment();
        void decrement();
};

std::ostream & operator<<(std::ostream & out, const Bureaucrat & x);


#endif