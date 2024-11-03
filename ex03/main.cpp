#include "DiamondTrap.hpp"

int main() {
    DiamondTrap b;
    DiamondTrap a("Cool");
        // check negative values entered
    std::cout << "=======ScavTrap a======" << std::endl;
    a.whoAmI();
    a.attack("Random");
    a.takeDamage(1); 
    a.takeDamage(1); 
    a.takeDamage(1);
    a.beRepaired(3);
    std::cout << "=======ScavTrap b======" << std::endl;
    b.whoAmI();
    b.attack("Random");
    b.takeDamage(1); 
    b.takeDamage(1); 
    b.takeDamage(1);
    b.beRepaired(3);
}