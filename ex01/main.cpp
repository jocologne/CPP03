#include "ScavTrap.hpp"
#include <iostream>

int main () {
	std::cout << "\n===== SCAVTRAP TESTS =====\n";

	ScavTrap scav1("scav");
	ScavTrap scav2(scav1);
	ScavTrap scav3;
	scav3 = scav1;

	scav1.attack("Training Dummy");
	scav1.takeDamage(30);
	scav1.beRepaired(15);
	scav1.guardGate();
	scav1.takeDamage(100); // Should destroy it
	scav1.attack("Should fail"); // Should fail
	scav1.guardGate(); // Still works - no EP/HP check

	std::cout << "\nScavTrap " << scav1.getName() << " status:\n";
	std::cout << "HP: " << scav1.getHitPoints() << "\n";
	std::cout << "EP: " << scav1.getEnergyPoints() << "\n";
	std::cout << "AD: " << scav1.getAttackDamage() << "\n";
}