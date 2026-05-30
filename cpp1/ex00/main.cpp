#include "Zombie.hpp"

int main()
{
	Zombie *heapZombie = newZombie("Heap");
	heapZombie->announce();
	// delete heapZombie;

	Zombie zombie("Foo");
	zombie.announce();

	randomChump("Bar");
	delete heapZombie;
	return (0);
}
