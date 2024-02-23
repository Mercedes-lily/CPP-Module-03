#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap " << this->_Name << " created sucessfully" << std::endl;
}
ScavTrap::ScavTrap(): ClapTrap()
{
    this->_HitPoint = 100;
    this->_EnergyPoint = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap DEFAULT created sucessfully" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_Name << " sucessfully destroy" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &Scav) :ClapTrap(Scav)
{
    *this = Scav;
}
ScavTrap &ScavTrap::operator=(const ScavTrap&Scav)
{
    this->_Name = Scav.getName();
    this->_HitPoint = Scav.getHitPoint();
    this->_EnergyPoint = Scav.getEnergyPoint();
    this->_AttackDamage = Scav.getAttackDamage();
    return(*this);
}
void ScavTrap::attack(const std::string& target)
{
    if (this->getHitPoint() <= 0)
    {
        std::cout << "ScavTrap " << this->_Name << " is dead and can't attack " << target << std::endl;
        return ;
    }
    if (this->getEnergyPoint() <= 0)
    {
        std::cout << "ScavTrap " << this->_Name << " have 0 Energy Point and can't attack " << target << std::endl;
        return ;
    }
    this->_EnergyPoint--;
    std::cout << "ScavTrap " << this->_Name << " attack " << target << " and make " << this->_AttackDamage << std::endl; 

}
void ScavTrap::guardGate()
{

    if (this->_guard == 0)
    {
        this->_guard = 1;
        std::cout << "ScavTrap " << this->_Name << " start his guard"<< std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->_Name << " continue his guard"<< std::endl;
}