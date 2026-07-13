#include "Bureaucrat.hpp"

int main ()
{
    try
    {   
        Bureaucrat b("Alice", 50);
        std::cout << b << std::endl;

        Bureaucrat b1("Patrick", 100);
        Bureaucrat b2("Mariana", 90);
        std::cout << b1 << " / " << b2 << "\n";
    }
    catch (std::exception & e)
    {
        std::cout << "Unexpected error." << "\n";
    }
    
    try
    {
        Bureaucrat b3("Bob", 200); // 200 > 150
    }
    catch (std::exception & e)
    {
        std::cout << "Erro: " << e.what() << std::endl;
    }
}