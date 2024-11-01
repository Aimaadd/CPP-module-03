#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Cool");
    ClapTrap b;
        // check negative values entered
    a.attack("Random");
    a.takeDamage(1); 
    a.takeDamage(1); 
    a.takeDamage(1);
    a.beRepaired(3);
}