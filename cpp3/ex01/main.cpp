#include "ClapTrap.hpp"

int main()
{
	ScavTrap scav;
	ScavTrap trap("Bob");
	ScavTrap copy(trap);
	scav = trap;
	trap.attack("zovao");
    trap.guardGate();
	return (0);
}