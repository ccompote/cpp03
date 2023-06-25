#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_hitpoints = 10;
	_energypoints = 10;
	_attackdamage = 0;
	_name = "Untitled";
	std::cout << "Default constructor of ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_hitpoints = 10;
	_energypoints = 10;
	_attackdamage = 0;
	_name = name;
	std::cout << "Constructor of ClapTrap with name is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Dectructor of ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	std::cout << "Copy constructor of ClapTrap is called" << std::endl;
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &claptrap)
{
	std::cout << "Copy assignment operator of ClapTrap called" << std::endl;
	this->_name = claptrap._name;
	this->_hitpoints = claptrap._hitpoints;
	this->_energypoints = claptrap._energypoints;
	this->_attackdamage = claptrap._attackdamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (_energypoints == 0)
		_attackdamage = 0;
	if (_hitpoints > 0 && _energypoints > 0 && _attackdamage > 0)
	{
		std::cout << _name << " attacks " << target << " causing " << _attackdamage << " points of damage." << std::endl;
		_energypoints--;
	}
	else
		std::cout << _name << " can't attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitpoints > 0)
	{
		if (_hitpoints < amount)
			_hitpoints = amount;
		else
			_hitpoints-=amount;
		std::cout << _name << " lost " << amount << " hit points." << std::endl;
	}
	else
		std::cout << _name << " is already all damaged." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energypoints > 0 && _energypoints > 0)
	{
		_hitpoints+=amount;
		_energypoints--;
		std::cout << _name << " gained " << amount << " hit points back." << std::endl;
	}
	else
		std::cout << _name << " can't be repaired." << std::endl;
}

std::string	ClapTrap::getName(void)
{
	return (_name);
}

unsigned int	ClapTrap::getEnergypoints(void)
{
	return (_energypoints);
}

unsigned int	ClapTrap::getHitpoints(void)
{
	return (_hitpoints);
}

unsigned int	ClapTrap::getAttackdamage(void)
{
	return (_attackdamage);
}