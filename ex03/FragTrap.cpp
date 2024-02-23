#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string Name): ClapTrap(Name, 100, 100, 30), _Name(Name)
{
	std::cout << "FragTrap " << this->_Name << " created sucessfully" << std::endl;
}

FragTrap::FragTrap(): ClapTrap("DEFAULT", 100, 100, 30), _Name("DEFAULT")
{
	std::cout << "FragTrap DEFAULT created sucessfully" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_Name << " sucessfully destroy" << std::endl;
}

FragTrap::FragTrap(const FragTrap &Frag) :ClapTrap(Frag)
{
	*this = Frag;
}
FragTrap &FragTrap::operator=(const FragTrap&Scav)
{
	this->_Name = Scav.getName();
	this->_HitPoint = Scav.getHitPoint();
	this->_EnergyPoint = Scav.getEnergyPoint();
	this->_AttackDamage = Scav.getAttackDamage();
	return(*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_Name << " want a HIGHFIVE"<< std::endl;
}