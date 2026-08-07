#include "Form.hpp"

std::string Form::getName() const
{
	
}

bool Form::getIsSigned() const
{

}

const int Form::getGradeSignIt() const
{

}

const int Form::gradeExecuteIt() const
{

}

void Form::beSigned(Bureaucrat & employee) const
{
	if (employee.getGrade() < 1)
		throw GradeTooHighException();
	if (employee.getGrade() > 150)
		throw GradeTooLowException();
	if (employee.getGrade() <= gradeSignIt)
		isSigned = true;
}