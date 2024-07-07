#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = toCopy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->Name = toCopy.Name;
	this->HitPoints = toCopy.HitPoints;
	this->EnergyPoints = toCopy.EnergyPoints;
	this->AttackDamage = toCopy.AttackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->HitPoints == 0)
	{
		std::cout << RED << "ScavTrap " << this->Name << " is dead and cannot attack" << NC << std::endl;
	}
	else if (this->EnergyPoints < 1)
	{
		std::cout << RED << "ScavTrap " << this->Name << " has no energy to attack" << NC << std::endl;
	}
	else
	{
		std::cout << CYAN << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << NC << std::endl;
		this->EnergyPoints -= 1;
	}
}

void ScavTrap::guardGate()
{
	if (this->HitPoints == 0)
	{
		std::cout << RED << "ScavTrap " << this->Name << " is dead and cannot guard the gate" << NC << std::endl;
	}
	else
	std::cout << "ScavTrap " << this->Name << " has entered in Gate keeper mode" << std::endl;
}
