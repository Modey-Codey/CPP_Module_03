#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("Modtanoy");
	std::cout << std::endl;

	clap.attack("Enemy");
	std::cout << std::endl;

	clap.takeDamage(5);
	std::cout << std::endl;

	clap.beRepaired(3);
	std::cout << std::endl;

	clap.takeDamage(10);
	std::cout << std::endl;

	clap.attack("Enemy");
	std::cout << std::endl;

	clap.beRepaired(5);
	std::cout << std::endl;

	return (0);
}
