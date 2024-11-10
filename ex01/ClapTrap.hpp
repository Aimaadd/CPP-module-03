#include <iostream>

class ClapTrap {
    public :
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &other);
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    protected :
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
};
