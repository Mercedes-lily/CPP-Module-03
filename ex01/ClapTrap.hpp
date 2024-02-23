#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
public:
    ClapTrap(std::string Name);
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap &Clap);
    ClapTrap &operator=(const ClapTrap&Clap);

    std::string getName() const;
    int getHitPoint() const;
    int getEnergyPoint() const;
    int getAttackDamage() const;

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    std::string _Name;
    int         _HitPoint;
    int         _EnergyPoint;
    int         _AttackDamage;
};

#endif