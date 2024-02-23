#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string _Name;

public:
	DiamondTrap(std::string Name);
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const DiamondTrap &Diamond);
	DiamondTrap &operator=(const DiamondTrap&Diamond);

	using ScavTrap::attack;
	void whoAmI();
};

#endif
