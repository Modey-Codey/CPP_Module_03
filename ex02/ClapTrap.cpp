#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoint(10), _energyPoints(10), _attackDamage(0)
{
	std::cout	<< "ClapTrap " << _name
				<< " is created. " << std::endl;
	std::cout	<< "HP: " << _hitPoint
				<< " / Energy: " << _energyPoints
				<< " / Damage: " << _attackDamage << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout   << "ClapTrap " << _name
				<< " is destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoint == 0 || _energyPoints == 0)
	{
		std::cout   << "FragTrap " << _name
					<< " cannot attack. " << std::endl;
		std::cout	<< "HP: " << _hitPoint
					<< " / Energy: " << _energyPoints
					<< " / Damage: " << _attackDamage << std::endl;
		return;
	}

	_energyPoints--;

	std::cout   << "FragTrap " << _name
				<< " attacks " << target
				<< ", causing " << _attackDamage
				<< " points of damage!" << std::endl;
	std::cout	<< "HP: " << _hitPoint
				<< " / Energy: " << _energyPoints
				<< " / Damage: " << _attackDamage << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= _hitPoint)
		_hitPoint = 0;
	else
		_hitPoint -= amount;

	std::cout   << "ClapTrap " << _name
				<< " takes " << amount
				<< " points of damage!" << std::endl;
	std::cout	<< "HP: " << _hitPoint
				<< " / Energy: " << _energyPoints
				<< " / Damage: " << _attackDamage << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint == 0 || _energyPoints == 0)
	{
		std::cout   << "ClapTrap " << _name
					<< " cannot be repaired." << std::endl;
		std::cout	<< "HP: " << _hitPoint
					<< " / Energy: " << _energyPoints
					<< " / Damage: " << _attackDamage << std::endl;
		return;
	}

	_energyPoints--;
	_hitPoint += amount;

	std::cout   << "ClapTrap " << _name
				<< " is repaired by " << amount
				<< " hit points!" << std::endl;
	std::cout	<< "HP: " << _hitPoint
				<< " / Energy: " << _energyPoints
				<< " / Damage: " << _attackDamage << std::endl;
}
