#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
        public :
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(const ScavTrap &copy);
            virtual ~ScavTrap();
            ScavTrap &operator=(const ScavTrap &src);
            void guardGate();
            void attack(std::string target);
        private :
            int _active;
};