#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
	_name = "Untitled";
	std::cout << "Default constructor of ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
	_name = name;
	std::cout << "Constructor of ScavTrap with name is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Dectructor of ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap)
{
	std::cout << "Copy constructor of ScavTrap is called" << std::endl;
	*this = scavtrap;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &scavtrap)
{
	std::cout << "Copy assignment operator of ScavTrap called" << std::endl;
	this->_name = scavtrap._name;
	this->_hitpoints = scavtrap._hitpoints;
	this->_energypoints = scavtrap._energypoints;
	this->_attackdamage = scavtrap._attackdamage;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (_energypoints == 0)
		_attackdamage = 0;
	if (_hitpoints > 0 && _energypoints > 0 && _attackdamage > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackdamage << " points of damage." << std::endl;
		_energypoints--;
	}
	else
		std::cout << _name << " can't attack." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
