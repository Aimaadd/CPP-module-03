#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("random"), ScavTrap(), FragTrap() {
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
    std::cout << getName() << " DiamondTrap constructed" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << getName() << " DiamondTrap destructed" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), ScavTrap(), FragTrap() {
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(30);
    std::cout << getName() << " DiamondTrap constructed" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ClapTrap::attack(target);
}

void DiamondTrap::takeDamage(unsigned int amount) {
    ClapTrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(unsigned int amount) {
    ClapTrap::beRepaired(amount);
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << ClapTrap::getName() << " and my name is " << ScavTrap::getName() << std::endl;
}