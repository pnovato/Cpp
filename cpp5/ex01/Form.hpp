#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form : public Bureaucrat
{
	private:
		std::string name;
		bool isSigned;
		const int gradeSignIt;
		const int gradeExecuteIt;

	public:
		Form & getForm() const;
		void beSigned(Bureaucrat & employee) const;
		std::string getName()const;
		bool getIsSigned() const;
		const int getGradeSignIt() const;
		const int gradeExecuteIt() const;
};


#endif
