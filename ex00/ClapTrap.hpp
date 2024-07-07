#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &toCopy);
		ClapTrap &operator = (const ClapTrap &toCopy);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};