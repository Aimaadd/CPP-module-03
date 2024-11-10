#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("") {
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Here comes " << _name << " ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string name ) : _name(name) {
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Here comes " << name << " ClapTrap" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap is gone" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
    if (this != &src) {
        this->_attackDamage = src._attackDamage;
        this->_energyPoints = src._energyPoints;
        this->_hitPoints = src._hitPoints;
    }
    return *this;
}

void ClapTrap::attack(std::string const &target) {
    if (_energyPoints <= 0) {
        std::cout << "No energy left to attack" << std::endl;
    } else {
        if (_name.empty()) {
            std::cout << "random attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
        } else {
            std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
        }
        _energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (amount <= 0) {
        std::cout << "Can't take this amount of damage" << std::endl;
        return;
    }
    if (amount <= 0) {
        std::cout << "You can't take this amount of damage" << std::endl;
        return;
    }
    if (amount >= _hitPoints) {
        if (_name.empty()) {
            std::cout << "random died from this attack" << std::endl;
        } else {
            std::cout << _name << " died from this attack" << std::endl;
        }
    } else {
        if (_name.empty()) {
            std::cout << "random received an attack that caused " << amount << " damage !" << std::endl;
            std::cout << "random now has " << _hitPoints - amount << "hp" << std::endl;
        } else {
            std::cout << _name << " received an attack that caused " << amount << " damage !" << std::endl;
            std::cout << _name << " now has " << _hitPoints - amount << "hp" << std::endl;
        }
        _hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (amount <= 0) {
        std::cout << "Can't heal for this amount" << std::endl;
        return;
    }
    if (_energyPoints <= 0) {
        std::cout << "No energy left to heal" << std::endl;
        return;
    }
    if (amount <= 0) {
        std::cout << "Can't heal" << std::endl;
        return;
    } else {
        _energyPoints--;
        _hitPoints += amount;
        if (_name.empty()) {
            std::cout << "random has now " << _hitPoints << " hp !" << std::endl;
        } else {
            std::cout << _name << " has now " << _hitPoints << " hp !" << std::endl;
        }
    }
}