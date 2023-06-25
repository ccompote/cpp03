#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	_hitpoints = ScavTrap::_hitpoints;
	_energypoints = ScavTrap::_energypoints;
	_attackdamage = FragTrap::_attackdamage;
	_name = "Untitled";
	std::cout << "Default constructor of DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(), FragTrap()
{
	_hitpoints = ScavTrap::_hitpoints;
	_energypoints = ScavTrap::_energypoints;
	_attackdamage = FragTrap::_attackdamage;
	_name = name;
	std::cout << "Constructor of DiamondTrap with name is called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Dectructor of DiamondTrap is called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &iamondTrap)
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
	if (_energypoints == 0)
		_attackdamage = 0;
	if (_hitpoints > 0 && _energypoints > 0 && _attackdamage > 0)
	{
		std::cout << "DiamondTrap " << _name << " attacks " << target << " causing " << _attackdamage << " points of damage." << std::endl;
		_energypoints--;
	}
	else
		std::cout << _name << " can't attack." << std::endl;
}