#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "random hp: " << _hitPoints << " ep: " << _energyPoints << " ad: " << _attackDamage << " " << std::endl;
}

ClapTrap::ClapTrap(std::string name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Here comes " << name << " ClapTrap" << std::endl;
    std::cout << _name << " hp: " << _hitPoints << " ep: " << _energyPoints << " ad: " << _attackDamage << " " << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << _name << " ClapTrap is gone" << std::endl;
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
        _energyPoints--;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
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