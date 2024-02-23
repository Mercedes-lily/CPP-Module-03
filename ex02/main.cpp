#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap Bob("Bob avec cheveux");
    FragTrap Tancrede("Tancrede");

    // 12 attacks
    Bob.attack("Woody");
    Tancrede.attack("Luigi");

    Bob.takeDamage(7);
    Bob.getHitPoint();
    Bob.beRepaired(7);
    Bob.guardGate();
    //Bob.highFivesGuys();

    Tancrede.takeDamage(3);
    Tancrede.beRepaired(7);
    Tancrede.takeDamage(15);
    Tancrede.beRepaired(1);
    Tancrede.highFivesGuys();
    //Tancrede.guardGate();
}