
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() 
	: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap" << _name << "constructor called" << std::endl;
}