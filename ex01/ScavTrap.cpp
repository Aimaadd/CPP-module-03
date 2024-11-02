#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("random") {
    std::cout << getName() << " Scav constructed" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << getName() << " Scav destroyed" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    if (name.empty())
        std::cout << "Here comes random ScavTrap" << std::endl;
    else
        std::cout << "Here comes " << name << " ScavTrap" << std::endl;
}

std::string ClapTrap::getName() const {
    return _name;
}

void ScavTrap::guardGate() {
    if (getName().empty())
        std::cout << "random is now in GATEKEEPER mode !" << std::endl;
    else
        std::cout << getName() << " is now in GATEKEEPER mode !" << std::endl;
}