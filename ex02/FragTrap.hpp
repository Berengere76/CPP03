#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &toCopy);
		FragTrap &operator=(const FragTrap &toCopy);
		~FragTrap();

		void attack(const std::string& target);
		void highFivesGuys(void);
};
