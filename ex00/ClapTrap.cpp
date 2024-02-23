#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap &ClapTrap::operator=(const ClapTrap &Clap)
{
    this->_Name = Clap.getName();
    this->_HitPoint = Clap.getHitPoint();
    this->_EnergyPoint = Clap.getEnergyPoint();
    this->_AttackDamage = Clap.getAttackDamage();
    return(*this);
}
ClapTrap::ClapTrap() : _Name("DEFAULT"), _HitPoint(10), _EnergyPoint(10) ,_AttackDamage(0)
{
    std::cout << "ClapTrap DEFAULT created sucessfully" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name), _HitPoint(10), _EnergyPoint(10) ,_AttackDamage(0)
{
    std::cout << "ClapTrap " << this->_Name << " created sucessfully" << std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->_Name << " destroy sucessfully" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &Clap)
{
    std::cout << "ClapTrap " << Clap._Name << " copied sucessfully" << std::endl;
    *this = Clap;
}

std::string ClapTrap::getName() const
{
    return(this->_Name);
}

int ClapTrap::getHitPoint() const
{
    return(this->_HitPoint);
}

int ClapTrap::getEnergyPoint() const
{
    return(this->_EnergyPoint);
}

int ClapTrap::getAttackDamage() const
{
    return(this->_AttackDamage);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->getHitPoint() <= 0)
    {
        std::cout << this->_Name << " is dead and can't attack " << target << std::endl;
        return ;
    }
    if (this->getEnergyPoint() <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " have 0 Energy Point and can't attack " << target << std::endl;
        return ;
    }
    this->_EnergyPoint--;
    std::cout << "ClapTrap " << this->_Name << " attack " << target << " and make " << this->_AttackDamage << std::endl; 
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getHitPoint() <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is already dead and can't tale damage" << std::endl;
        return ;
    }
    this->_HitPoint -= amount;
    std::cout << "ClapTrap " << this->_Name << " suffer " << amount << " damage" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{  
    if (this->getHitPoint() <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " is dead and can't heal himself" << std::endl;
        return ;
    }
    if (this->getEnergyPoint() <= 0)
    {
        std::cout << "ClapTrap " << this->_Name << " have 0 Energy Point and can't heal himself" << std::endl;
        return ;
    }
    this->_HitPoint += amount;
    this->_EnergyPoint--;
    std::cout << "ClapTrap " << this->_Name << " make some reparation to himself for " << amount << "HP" << std::endl; 
}
