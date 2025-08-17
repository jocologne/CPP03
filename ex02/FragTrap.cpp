#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " created" << std::endl; 
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << "destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other){
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap copy assignment called for " << _name << std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	if (_hitPoints == 0) {
		std::cout << "FragTrap is destroyed and can't high five" << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " HIGH FIVE GUYS!" <<std::endl;
}