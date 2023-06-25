#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap claptwo("Sam");
	ClapTrap clapthree("Dean");

	for (int i = 0; i <= 10; i++)
	{
		claptwo.attack(clapthree.getName());
		clapthree.takeDamage(claptwo.getAttackdamage());
		std::cout << claptwo.getEnergypoints() << " energy points of " << claptwo.getName() << std::endl;
		std::cout << clapthree.getHitpoints() << " hit points of " << clapthree.getName() << std::endl;
	}
	clapthree.beRepaired(1);
	claptwo.attack(clapthree.getName());
	clapthree.takeDamage(claptwo.getAttackdamage());
	std::cout << claptwo.getEnergypoints() << " energy points of " << claptwo.getName() << std::endl;
	std::cout << clapthree.getHitpoints() << " hit points of " << clapthree.getName() << std::endl;
	return (0);
}