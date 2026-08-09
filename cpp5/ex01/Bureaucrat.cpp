#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
    std::cout << "Default Constructor called" << "\n";
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
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

void Bureaucrat::signForm()
{
    Form::beSigned;
    if ()
    {
        /* code */
    }
    
}	

const std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::increment()
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    _grade -= 1;
}

void Bureaucrat::decrement()
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    _grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() //O retorno e uma string
{
    return ("Grade is to high!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is to low...");
}

std::ostream & operator<<(std::ostream & out, const Bureaucrat & x) //Ex: std::cout << meuBureaucrat . Nao funciona pq o sistema nao sabe oq e printar um objeto
{
    out << x.getName() << ", with grade " << x.getGrade();
    return (out);
}
