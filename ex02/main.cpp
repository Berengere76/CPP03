#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap clapTrap;
	ScavTrap scavTrap;
	FragTrap fragTrap;

	clapTrap.attack("ScavTrap");
	fragTrap.attack("ClapTrap");
	clapTrap.takeDamage(30);
	clapTrap.beRepaired(20);
	scavTrap.guardGate();
	fragTrap.highFivesGuys();

	return 0;
}
