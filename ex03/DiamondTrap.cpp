#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name)
	: ClapTrap(name + "_clap_name"),
	  FragTrap(name),
	  ScavTrap(name),
	  _name(name)
{
	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 30;

	std::cout	<< "DiamondTrap " << _name
				<< " is created." << std::endl;
	std::cout	<< "HP: " << _hitPoint
				<< " / Energy: " << _energyPoints
				<< " / Damage: " << _attackDamage
				<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout	<< "DiamondTrap " << _name
				<< " is destroyed." << std::endl;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< "DiamondTrap name: " << _name
				<< std::endl;
	std::cout	<< "ClapTrap name: " << ClapTrap::_name
				<< std::endl;
}