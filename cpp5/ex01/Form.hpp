#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string _name;
		bool _isSigned;
		const int _gradeToSignIt;
		const int _gradeToExecuteIt;

	public:
		Form();
        Form(const std::string& _name, bool _isSigned, const int _gradeToSignIt, const int _gradeToExecuteIt);
        Form(const Form& src);
        Form& operator=(const Form& rhs);
        ~Form();

		Form & getForm() const;
		void beSigned(Bureaucrat const& employee);
		std::string getName()const;
		bool getIsSigned() const;
		void setIsSigned();
		const int getGradeSignIt() const;
		const int getGradeExecuteIt() const;

		class GradeTooHighException : public std::exception 
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream & operator<<(std::ostream & out, const Form & x);

#endif
