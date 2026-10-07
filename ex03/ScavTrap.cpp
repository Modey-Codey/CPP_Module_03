#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	std::cout	<< "ScavTrap " << _name
				<< " is created." << std::endl;

	_hitPoint = 100;
	_energyPoints = 50;
	_attackDamage = 20;

	std::cout	<< "HP: " << _hitPoint
				<< " / Energy: " << _energyPoints
				<< " / Damage: " << _attackDamage << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout	<< "ScavTrap " << _name
				<< " is destroyed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoint == 0 || _energyPoints == 0)
	{
		std::cout	<< "ScavTrap " << _name
					<< " cannot attack." << std::endl;
		return;
	}

	_energyPoints--;

	std::cout	<< "ScavTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage!" << std::endl;

	std::cout	<< "HP: " << _hitPoint
				<< " / Energy: " << _energyPoints
				<< " / Damage: " << _attackDamage << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout	<< "ScavTrap " << _name
				<< " is now in Gate keeper mode."
				<< std::endl;
}
