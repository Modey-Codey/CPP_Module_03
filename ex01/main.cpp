#include "ScavTrap.hpp"

int main()
{
	ScavTrap scav("Serena");
	std::cout << std::endl;

	scav.attack("ClapTrap");
	std::cout << std::endl;

	scav.guardGate();
	std::cout << std::endl;

	scav.takeDamage(30);
	std::cout << std::endl;

	scav.beRepaired(20);
	std::cout << std::endl;

	return (0);
}
