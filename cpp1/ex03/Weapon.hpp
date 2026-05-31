#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	public:
		Weapon(void);
		Weapon(std::string something);
		~Weapon(void);
		std::string getType() const;
		void setType(std::string newType);
	private:
		std::string _type;
};

#endif
