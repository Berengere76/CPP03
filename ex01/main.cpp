#include "ScavTrap.hpp"

int main()
{
	ClapTrap clapTrap;
	ScavTrap scavTrap;

	clapTrap.attack("ScavTrap");
	scavTrap.attack("ClapTrap");
	clapTrap.takeDamage(20);
	clapTrap.beRepaired(10);
	scavTrap.guardGate();

	return 0;
}
