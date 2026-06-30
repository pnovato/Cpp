#include "ClapTrap.hpp"

int main()
{
	FragTrap frag;
	FragTrap trap("Bob");
	FragTrap copy(trap);
	frag = trap;
	trap.attack("zovao");
    trap.highFivesGuys();
	return (0);
}