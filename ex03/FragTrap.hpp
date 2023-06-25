#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &);
        FragTrap &operator=(FragTrap const &);
        ~FragTrap();

        void            attack(const std::string &target);
		void 			highFivesGuys(void);
};

#endif