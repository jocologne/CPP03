#include "ClapTrap.hpp"
#include <iostream>

int main() {
	std::cout << "===== CLAPTRAP COMBAT TEST =====\n";

	// Create two ClapTraps
	ClapTrap attacker("ATK");
	ClapTrap defender("DEF");

	// Initial stats
	std::cout << "\nInitial Stats:\n";
	std::cout << attacker.getName() << ": " 
				<< attacker.getHitPoints() << " HP | " 
				<< attacker.getEnergyPoints() << " EP\n";
	std::cout << defender.getName() << ": " 
				<< defender.getHitPoints() << " HP | " 
				<< defender.getEnergyPoints() << " EP\n";

	// Test basic attack
	std::cout << "\n--- Attack Test ---\n";
	attacker.attack(defender.getName());
	defender.takeDamage(attacker.getAttackDamage());

	// Test repair
	std::cout << "\n--- Repair Test ---\n";
	defender.beRepaired(3);

	// Test multiple attacks until energy runs out
	std::cout << "\n--- Energy Depletion Test ---\n";
	for (int i = 1; i <= 12; i++) {
		std::cout << "[Turn " << i << "] ";
		if (attacker.getEnergyPoints() > 0) {
			attacker.attack(defender.getName());
			defender.takeDamage(attacker.getAttackDamage());
		} else {
			std::cout << attacker.getName() << " is out of energy!\n";
			break;
		}
	}

	// Final stats
	std::cout << "\nFinal Stats:\n";
	std::cout << attacker.getName() << ": " 
				<< attacker.getHitPoints() << " HP | " 
				<< attacker.getEnergyPoints() << " EP\n";
	std::cout << defender.getName() << ": " 
				<< defender.getHitPoints() << " HP | " 
				<< defender.getEnergyPoints() << " EP\n";

	return 0;
}