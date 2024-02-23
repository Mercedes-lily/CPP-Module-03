#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	std::string	_Name;
    bool _guard;
public:
    ScavTrap(std::string Name);
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &Scav);
    ScavTrap &operator=(const ScavTrap&Scav);
    void attack(const std::string& target);
    void guardGate();
};

#endif