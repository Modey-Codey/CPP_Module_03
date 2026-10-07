#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name)
{
	std::cout	<< "FragTrap " << _name
				<< " is created." << std::endl;

	_hitPoint = 100;
	_energyPoints = 100;
	_attackDamage = 30;

	std::cout	<< "HP: " << _hitPoint
				<< " / Energy: " << _energyPoints
				<< " / Damage: " << _attackDamage << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout	<< "FragTrap " << _name
				<< " is destroyed." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout	<< "FragTrap " << _name
				<< " requests a high five!"
				<< std::endl;
}
