#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
	public:
		Weapon(std::string);
		~Weapon(void);
		std::sting& getType() const;
		void setType(std::string newType);
	private:
		std::string _type;
}

#endif
