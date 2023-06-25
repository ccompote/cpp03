#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scavone;
	ScavTrap scavtwo("dumbo");
	ScavTrap scavthree("idiot");

	for (int i = 0; i < 5; i++)
	{
		scavtwo.attack(scavthree.getName());
		scavthree.takeDamage(scavtwo.getAttackdamage());
		std::cout << scavtwo.getEnergypoints() << " energy points of " << scavtwo.getName() << std::endl;
		std::cout << scavthree.getHitpoints() << " hit points of " << scavthree.getName() << std::endl;
	}
	scavtwo.guardGate();
	return (0);
}