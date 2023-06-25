#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap fragone;
	FragTrap fragtwo("dumbo");
	FragTrap fragthree("idiot");

	for (int i = 0; i < 5; i++)
	{
		fragtwo.attack(fragthree.getName());
		fragthree.takeDamage(fragtwo.getAttackdamage());
		std::cout << fragtwo.getEnergypoints() << " energy points of " << fragtwo.getName() << std::endl;
		std::cout << fragthree.getHitpoints() << " hit points of " << fragthree.getName() << std::endl;
	}
	fragtwo.highFivesGuys();
	return (0);
}