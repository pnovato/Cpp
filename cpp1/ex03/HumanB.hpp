#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
        public:
                HumanB(void);
                HumanB(std::string human);
                ~HumanB(void);
		void setWeapon(Weapon type);
                void attack(void);
        private:
                Weapon* _pvtWpB;
                std::string _nameB;
};

#endif
