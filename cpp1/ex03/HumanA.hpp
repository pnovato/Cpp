#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(void);
		HumanA(std::string, Weapon something);
		~HumanA(void);
		void attack(void);
	private:
		Weapon _pvtWpA;
		std::string _nameA;
}

#endif
