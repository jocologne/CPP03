
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() 
	: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Named constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;		
	}
	std::cout << "Copy assignment called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to attack!" << std::endl;
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is destroyed and can't attack!" << std::endl;
		return; 
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(_hitPoints == 0) {
		std::cout << _name << "is already destroyed" << std::endl;
		return;
	}
	if(amount >= _hitPoints) {
		_hitPoints = 0;
		std::cout << _name << " takes " << amount << " damage and is destroyed!" << std::endl;
	} else {
		_hitPoints -= amount;
		std::cout << _name << " takes " << amount << " damage (" << _hitPoints << " HP remaining)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints == 0) {
		std::cout << _name << " can't repair - no energy left!" << std::endl;
		return;
	}
	if (_hitPoints == 0) {
		std::cout << _name << " can't repair - already destroyed!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << _name << " repairs itself for " << amount << " HP (" << _hitPoints << ")" << std::endl;
}

std::string ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::getHitPoints() const {
	return _hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}