#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	std::cout << "Teste 1: Form Valido" << "\n";
	try
	{
		Form a("Tax", false, 50, 25);
		std::cout << a << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "Erro Inesperado: " << e.what() << "\n";
	}
	return 0;
}