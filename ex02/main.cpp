#include "FragTrap.hpp"

int main() {
    FragTrap a("Cool");
    FragTrap b;
        // check negative values entered
    std::cout << "=======ClapTrap a======" << std::endl;
    a.attack("Random");
    a.takeDamage(1); 
    a.takeDamage(1); 
    a.takeDamage(1);
    a.beRepaired(3);
    a.highFiveGuys();
    a.attack("random");
    a.highFiveGuys();
    a.attack("random");
    std::cout << "=======ClapTrap b======" << std::endl;
    b.attack("Random");
    b.takeDamage(1); 
    b.takeDamage(1); 
    b.takeDamage(1);
    b.beRepaired(3);
}