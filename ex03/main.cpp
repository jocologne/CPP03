#include "DiamondTrap.hpp"

int main() {
	DiamondTrap dt1("Diamond");
	dt1.whoAmI();
	dt1.attack("target");
	dt1.guardGate();      // From ScavTrap
	dt1.highFivesGuys();  // From FragTrap
	return 0;
}