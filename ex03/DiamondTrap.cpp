#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	_hitpoints = ScavTrap::_hitpoints;
	_energypoints = ScavTrap::_energypoints;
	_attackdamage = FragTrap::_attackdamage;
	_name = "Untitled";
	std::cout << "Default constructor of DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(), ScavTrap()
{
	_hitpoints = ScavTrap::_hitpoints;
	_energypoints = ScavTrap::_energypoints;
	_attackdamage = FragTrap::_attackdamage;
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "Constructor of DiamondTrap with name is called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Dectructor of DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap)
{
	std::cout << "Copy constructor of DiamondTrap is called" << std::endl;
	*this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
	std::cout << "Copy assignment operator of DiamondTrap called" << std::endl;
	this->_name = diamondtrap._name;
	this->_hitpoints = diamondtrap._hitpoints;
	this->_energypoints = diamondtrap._energypoints;
	this->_attackdamage = diamondtrap._attackdamage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << " and ClapTrap's name is " << ClapTrap::_name << std::endl;
}