#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
	_name = "Untitled";
	std::cout << "Default constructor of FragTrap is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
	_name = name;
	std::cout << "Constructor of FragTrap with name is called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Dectructor of FragTrap is called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap)
{
	std::cout << "Copy constructor of FragTrap is called" << std::endl;
	*this = fragtrap;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtrap)
{
	std::cout << "Copy assignment operator of FragTrap called" << std::endl;
	this->_name = fragtrap._name;
	this->_hitpoints = fragtrap._hitpoints;
	this->_energypoints = fragtrap._energypoints;
	this->_attackdamage = fragtrap._attackdamage;
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (_energypoints == 0)
		_attackdamage = 0;
	if (_hitpoints > 0 && _energypoints > 0 && _attackdamage > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << " causing " << _attackdamage << " points of damage." << std::endl;
		_energypoints--;
	}
	else
		std::cout << _name << " can't attack." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "Give me a high five dude" << std::endl;
}