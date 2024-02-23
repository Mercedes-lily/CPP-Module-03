#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap Bob("Bob avec cheveux");
    ScavTrap Tancrede("Tancrede");

    // 12 attacks
    Bob.attack("Woody");
    Bob.attack("Luigi");
    Bob.attack("Woody");
    Bob.attack("Luigi");
    Bob.attack("Woody");
    Bob.attack("Luigi");
    Bob.attack("Woody");
    Bob.attack("Luigi");
    Bob.attack("Woody");
    Bob.attack("Luigi");
    Bob.attack("Woody");
    Bob.attack("Luigi");

    Bob.takeDamage(7);
    Bob.getHitPoint();
    Bob.beRepaired(7);
    Bob.getHitPoint();

    Tancrede.takeDamage(3);
    Tancrede.beRepaired(7);
    Tancrede.takeDamage(15);
    Tancrede.beRepaired(1);
    Tancrede.guardGate();
    Tancrede.guardGate();
}