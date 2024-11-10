#include "ScavTrap.hpp"

int main() {
    ScavTrap a("Cool");
    ScavTrap b;
        // check negative values entered
    std::cout << "=======ClapTrap a======" << std::endl;
    a.attack("Random");
    a.takeDamage(1); 
    a.takeDamage(1); 
    a.takeDamage(1);
    a.beRepaired(3);
    a.guardGate();
    a.attack("random");
    a.guardGate();
    a.attack("random");
    std::cout << "=======ClapTrap b======" << std::endl;
    b.attack("Random");
    b.takeDamage(1); 
    b.takeDamage(1); 
    b.takeDamage(1);
    b.beRepaired(3);
}