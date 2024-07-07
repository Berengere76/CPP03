#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Default constructor name called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = toCopy;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->Name = toCopy.Name;
	this->HitPoints = toCopy.HitPoints;
	this->EnergyPoints = toCopy.EnergyPoints;
	this->AttackDamage = toCopy.AttackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->HitPoints == 0)
	{
		std::cout << RED << "FragTrap " << this->Name << " is dead and cannot attack" << NC << std::endl;
	}
	else if (this->EnergyPoints < 1)
	{
		std::cout << RED << "FragTrap " << this->Name << " has no energy to attack" << NC << std::endl;
	}
	else
	{
		std::cout << CYAN << "FragTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << NC << std::endl;
		this->EnergyPoints -= 1;
	}
}

void FragTrap::highFivesGuys(void)
{
	if (this->HitPoints == 0)
	{
		std::cout << RED << "FragTrap " << this->Name << " is dead and cannot high five" << NC << std::endl;
	}
	else
		std::cout << GREEN << "FragTrap " << this->Name << " high fives guys!!! :)" << NC << std::endl;
}
