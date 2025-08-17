#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " is created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called for " << _name <<  std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " was destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
	if (this != &other)	{
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap copy assignment called for " << _name << std::endl;
	return *this;
}

void ScavTrap::attack(const std::string &target) {
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " can't attack (no EP/HP)!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " damage!" << std::endl;
}

void ScavTrap::guardGate() {
	if (_energyPoints == 0 || _hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " can't guard gate" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " is guarding gate" << std::endl;
}