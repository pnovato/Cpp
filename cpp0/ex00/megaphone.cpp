#include <iostream>
#include <string>
#include <algorithm>

/*std::string str_toupper(std::string s)
{
	std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {return (std::toupper(c));});
	return (s);
}*/

int main(int ac, char **av)
{
	int	i;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (1);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			std::string argument = av[i];
			std::transform(argument.begin(), argument.end(), argument.begin(), toupper);	
			//std::cout << str_toupper(argument);
			std::cout << argument;
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
