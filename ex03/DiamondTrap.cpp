#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_trap", 100, 50, 30), ScavTrap(Name), FragTrap(Name)
{
	this->_Name = Name;
	std::cout << "DiamondTrap " << this->_Name << " created sucessfully" << std::endl;
}
DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap DEFAULT created sucessfully" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_Name << " sucessfully destroy" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &Diamond)
{
	*this = Diamond;
}
DiamondTrap &DiamondTrap::operator=(const DiamondTrap&Diamond)
{
	this->_Name = Diamond.getName();
	this->_HitPoint = Diamond.getHitPoint();
	this->_EnergyPoint = Diamond.getEnergyPoint();
	this->_AttackDamage = Diamond.getAttackDamage();
	return(*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Diamond Name : " << this->_Name << std::endl;
	std::cout << "Clap Name : " << ClapTrap::_Name << std::endl;
}
