#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    this->_name = "random";
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    this->_name = name;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src){
    std::cout << "FragTrap assignation called" << std::endl;
    this->_hitPoints = src._hitPoints;
    this->_attackDamage = src._attackDamage;
    this->_energyPoints = src._energyPoints;
    this->_name = src._name;
    return *this;
}

void FragTrap::highFiveGuys() {
    std::cout << _name << " FragTrap requests a high five" << std::endl;    
}