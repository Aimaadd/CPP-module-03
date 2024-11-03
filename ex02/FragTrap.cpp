#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("random")  {
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << ClapTrap::getName() << " FragTrap constructed" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << name << " FragTrap constructed" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << ClapTrap::getName() << " FragTrap destructed" << std::endl;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "High five request" << std::endl;
}