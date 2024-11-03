#include "FragTrap.hpp"

int main() {
    FragTrap b;
    FragTrap a("Cool");
        // check negative values entered
    std::cout << "=======ScavTrap a======" << std::endl;
    a.highFivesGuys();
    a.attack("Random");
    a.takeDamage(1); 
    a.takeDamage(1); 
    a.takeDamage(1);
    a.beRepaired(3);
    std::cout << "=======ScavTrap b======" << std::endl;
    b.highFivesGuys();
    b.attack("Random");
    b.takeDamage(1); 
    b.takeDamage(1); 
    b.takeDamage(1);
    b.beRepaired(3);
}