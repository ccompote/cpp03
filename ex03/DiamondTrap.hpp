#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:

		std::string _name;

	public:

		DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &);
        DiamondTrap &operator=(DiamondTrap const &);
        ~DiamondTrap();

		void whoAmI();
		void attack(const std::string &target);
};

#endif