#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	std::cout << "Teste 1: Form Valido" << "\n";
	try
	{
		Form a("Tax", false, 50, 25);
		std::cout << a;
	}
	catch(const std::exception& e)
	{
		std::cout << "Erro Inesperado: " << e.what() << "\n";
	}

	std::cout << "Teste 2: Form com grade invalida" << "\n";
	try
	{
		//Form form1("Bad 1", false, 0, 25);
		Form form2("Bad 2", false, 50, 151);
		//std::cout << form1;
		std::cout << form2;
	}
	catch(const std::exception& e)
	{
		std::cout << "Erro Inesperado: " << e.what() << '\n';
	}
	
	return 0;
}