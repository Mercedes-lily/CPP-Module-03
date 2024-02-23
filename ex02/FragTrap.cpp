#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string Name): ClapTrap(Name)
{
	this->_HitPoint = 100;
	this->_EnergyPoint = 100;
	this->_AttackDamage = 30;
	std::cout << "ScavTrap " << this->_Name << " created sucessfully" << std::endl;
}
FragTrap::FragTrap(): ClapTrap()
{
	this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap DEFAULT created sucessfully" << std::endl;
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