#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
        public:
                HumanB(void);
                HumanB(std::string, Weapon something);
                ~HumanB(void);
                void attack(void);
        private:
                Weapon _pvtWpB;
                std::string _nameB;
}

#endif
