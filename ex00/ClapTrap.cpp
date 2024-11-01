#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {

}

ClapTrap::ClapTrap(std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Here comes the ClapTrap" << std::endl;
    std::cout << _name + " | " << "hp: " << _hitPoints << " ep: " << _energyPoints << " ad: " << _attackDamage << " " << std::endl;
}

ClapTrap::~ClapTrap() {

}

void ClapTrap::attack(std::string const &target) {
    if(this->_hitPoints <= 0 || this->_energyPoints <= 0) {
        std::cout << "Can't attack" << std::endl;
        return;
    }
    else {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
        _energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount <= 0) {
        std::cout << "You can't take this amount of damage" << std::endl;
        return;
    }
    if (amount >= _hitPoints) {
        std::cout << _name << " died from this attack" << std::endl;
    }
    else {
        std::cout << _name << " received an attack that caused " << amount << " damage !" << std::endl;
        _hitPoints = _hitPoints - amount;
        _energyPoints--;
        std::cout << _name << " now has " << _hitPoints << "hp" << std::endl;
        return;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (amount <= 0) {
        std::cout << "Can't heal" << std::endl;
        return;
    }
    else {
        _energyPoints--;
        _hitPoints = _hitPoints + amount;
        std::cout << _name << " has now " << _hitPoints << " hp !" << std::endl;
        return;
    }
}