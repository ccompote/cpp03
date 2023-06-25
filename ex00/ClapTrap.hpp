#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:

        std::string     _name;
        unsigned int    _hitpoints;
        unsigned int    _energypoints;
        unsigned int    _attackdamage;

    public:

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &);
        ClapTrap &operator=(ClapTrap const &);
        ~ClapTrap();

        void            attack(const std::string &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        std::string	    getName(void);
        unsigned int	getEnergypoints(void);
        unsigned int	getHitpoints(void);
        unsigned int	getAttackdamage(void);

};

#endif