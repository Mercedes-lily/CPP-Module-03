#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string Name);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &Scav);
	FragTrap &operator=(const FragTrap&Scav);
	void highFivesGuys(void);
};

#endif