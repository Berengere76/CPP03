#include "ClapTrap.hpp"
#include "colors.h"

ClapTrap::ClapTrap() : Name("Default"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->Name = toCopy.Name;
	this->HitPoints = toCopy.HitPoints;
	this->EnergyPoints = toCopy.EnergyPoints;
	this->AttackDamage = toCopy.AttackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->HitPoints == 0)
	{
		std::cout << RED << "ClapTrap " << this->Name << " is dead and cannot attack" << NC << std::endl;
	}
	else if (this->EnergyPoints < 1)
	{
		std::cout << RED << "ClapTrap " << this->Name << " has no energy to attack" << NC << std::endl;
	}
	else
	{
		std::cout << CYAN << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << NC << std::endl;
		this->EnergyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->HitPoints == 0)
	{
		std::cout << RED << "ClapTrap " << this->Name << " is already dead" << NC << std::endl;
	}
	else
	{
		std::cout << PURPLE << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << NC << std::endl;
		this->HitPoints -= amount;
		if (this->HitPoints < 1)
		{
			std::cout << RED << "ClapTrap " << this->Name << " has died" << NC << std::endl;
			this->HitPoints = 0;
		}
		if (this->HitPoints > 0)
			std::cout << YELLOW << "ClapTrap " << this->Name << " has " << this->HitPoints << " hit points left" << NC << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HitPoints == 0)
	{
		std::cout << RED << "ClapTrap " << this->Name << " is dead and cannot be repaired" << NC << std::endl;
	}
	else if (this->EnergyPoints < 1)
	{
		std::cout << RED << "ClapTrap " << this->Name << " has no energy to be repaired" << NC << std::endl;
	}
	else
	{
		std::cout << GREEN << "ClapTrap " << this->Name << " is repaired for " << amount << " points of health!" << NC << std::endl;
		this->HitPoints += amount;
		this->EnergyPoints -= 1;
		std::cout << YELLOW << "ClapTrap " << this->Name << " has " << this->HitPoints << " hit points left" << NC << std::endl;
	}
}
