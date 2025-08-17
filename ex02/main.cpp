#include "FragTrap.hpp"
#include <iostream>

int main(void) {
	std::cout << "===== BASIC TESTS =====" << std::endl;
	FragTrap defaultBot;
	FragTrap namedBot("Boomer");
	FragTrap copiedBot(namedBot);

	std::cout << "\n===== FUNCTIONALITY TESTS =====" << std::endl;
	namedBot.attack("Target Dummy");  // Should use ClapTrap's attack but with FragTrap's 30 damage
	namedBot.takeDamage(50);
	namedBot.beRepaired(25);
	namedBot.highFivesGuys();

	std::cout << "\n===== EDGE CASES =====" << std::endl;
	FragTrap weakBot("Fragile");
	weakBot.takeDamage(100);  // Should be destroyed
	weakBot.attack("Should Fail");  // Shouldn't work
	weakBot.highFivesGuys();  // Shouldn't work

	std::cout << "\n===== COPY/ASSIGNMENT TESTS =====" << std::endl;
	FragTrap assignedBot;
	assignedBot = namedBot;
	assignedBot.highFivesGuys();

	std::cout << "\n===== STATUS CHECK =====" << std::endl;
	std::cout << namedBot.getName() << " status:" << std::endl
				<< "HP: " << namedBot.getHitPoints() << std::endl
				<< "EP: " << namedBot.getEnergyPoints() << std::endl 
				<< "AD: " << namedBot.getAttackDamage() << std::endl;
}
