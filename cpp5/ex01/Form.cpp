#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false)
{
    std::cout << "Default Constructor called" << "\n";
}

Form::Form(const std::string& name, bool isSigned, const int gradeToSignIt, const int _) : _name(name), 
{
    if (grade < 1)
    	throw GradeTooHighException(); //throw so lanca objetos
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
    std::cout << "Bureaucrat " << _name << " with grade " << _grade << " was called" << "\n";
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << "\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade)
{
    std::cout << "Copy constructor called" << "\n"; //membros const devem ser inicializados na lista, se nao, nao compila
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat& rhs)
{
    std::cout << "Copy assignment operator called" << "\n";
    if (this != &rhs)
        _grade = rhs._grade;
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

const int Form::gradeExecuteIt() const
{
	return (this->_gradeToExecuteIt);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is to high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is to low...");
}

void Form::beSigned(Bureaucrat & employee) const
{
	if (employee.getGrade() < 1)
		throw GradeTooHighException();
	if (employee.getGrade() > 150)
		throw GradeTooLowException();
	if (employee.getGrade() <= _gradeToSignIt)
		setIsSigned;
}