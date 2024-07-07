#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap;
	ClapTrap clapTrap2("FragTrap");

	clapTrap.attack("FragTrap");
	clapTrap2.takeDamage(7);
	clapTrap2.beRepaired(5);
	clapTrap.attack("FragTrap");
	clapTrap2.takeDamage(10);
	clapTrap2.beRepaired(5);
	return 0;
}
