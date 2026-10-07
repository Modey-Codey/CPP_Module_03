#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("Serena");
	std::cout << std::endl;

	diamond.whoAmI();
	std::cout << std::endl;

	diamond.attack("ClapTrap");
	std::cout << std::endl;

	diamond.takeDamage(20);
	std::cout << std::endl;

	diamond.beRepaired(10);
	std::cout << std::endl;

	diamond.guardGate();
	std::cout << std::endl;
	
	diamond.highFivesGuys();
	std::cout << std::endl;

	return (0);
}