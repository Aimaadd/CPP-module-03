#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public :
        FragTrap();
        FragTrap(std::string name);
        virtual ~FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap &operator=(const FragTrap &src);
        void highFiveGuys();
};