#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints =  100;
    this->_energyPoints = 50;
    this->_attackDamage = 20; 
    this->_active = 0;
    this->name = "random";
    std::cout << "Here comes the ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints =  100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_active = 0;
    std::cout << "Here comes the ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
    if (this != &src) {
        ClapTrap::operator=(src);
        this->_hitPoints = src._hitPoints;
        this->_energyPoints = src._energyPoints;
        this->_attackDamage = src._attackDamage;
        this->_active = src._active;
    }
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
    this->_active = copy._active;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::attack(std::string target) {
    if (_active == 1) {
        std::cout << "This ScavTrap is in guarding mode and can't attack" << std::endl;
    }
    else if (_energyPoints > 0 && _active == 0) {
        _energyPoints--;
        std::cout << "This unit is attacking " << target << " and deals " << _attackDamage << "damage points" << std::endl;
    }
}

void    ScavTrap::guardGate() {
    if (_active == 0) {
        std::cout << "Entering guard mode" << std::endl;
        this->_active = 1;
        std::cout << "This ScavTrap is now in guarding mode" << std::endl;
    }
    else if (_active == 1) {
        this->_active = 0;
        std::cout << "Deactivating the guarding mode" << std::endl;
    }
}