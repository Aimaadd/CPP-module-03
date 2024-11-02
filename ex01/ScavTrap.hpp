#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
    public :
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const std::string& name);
        void guardGate();
    private :
};