#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSignIt(150), _gradeToExecuteIt(150)
{
    std::cout << "Default Constructor called" << "\n";
}

Form::Form(const std::string& name, bool isSigned, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(isSigned), _gradeToSignIt(gradeToSign), _gradeToExecuteIt(gradeToExecute)
{
    if (gradeToExecute < 1 || gradeToSign < 1)
    	throw GradeTooHighException(); //throw so lanca objetos
    else if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
    std::cout << "Form " << _name << " with grade to sign: " << gradeToSign << " and grade to execute: " << gradeToExecute << ", was called" << "\n";
}

Form::~Form()
{
    std::cout << "Destructor called" << "\n";
}

Form::Form(const Form& src) : _name(src._name), _isSigned(src._isSigned), _gradeToSignIt(src._gradeToSignIt), _gradeToExecuteIt(src._gradeToExecuteIt)
{
    std::cout << "Copy constructor called" << "\n"; //membros const devem ser inicializados na lista, se nao, nao compila
}

Form & Form::operator=(const Form& rhs)
{
    std::cout << "Copy assignment operator called" << "\n";
    if (this != &rhs)
		_isSigned = rhs._isSigned;
    return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

void Form::setIsSigned()
{
	_isSigned = true;
}

const int Form::getGradeSignIt() const
{
	return (this->_gradeToSignIt);
}

const int Form::getGradeExecuteIt() const
{
	return (this->_gradeToExecuteIt);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low...");
}

void Form::beSigned(Bureaucrat const& employee)
{
	if (employee.getGrade() > _gradeToSignIt)
		throw GradeTooLowException();
	setIsSigned();
}

std::ostream & operator<<(std::ostream & out, const Form & x)
{
	out << x.getName() << " form with grade to sign: " << x.getGradeSignIt() << ", and grade to execute: " << x.getGradeExecuteIt() << " is: " << (x.getIsSigned()? "Signed" : "Unsigned") << "\n";
	return (out);
}