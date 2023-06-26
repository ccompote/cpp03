#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diaone("Bobik");
	diaone.attack("Carl");
	diaone.takeDamage(6);
	diaone.beRepaired(4);
	diaone.guardGate();
	diaone.highFivesGuys();
	diaone.whoAmI();
	return (0);
}