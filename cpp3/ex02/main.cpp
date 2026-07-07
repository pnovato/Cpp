#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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