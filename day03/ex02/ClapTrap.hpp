/* 
$$      $$\ 
$$$\    $$$ |
$$$$\  $$$$ | $$$$$$\  $$\   $$\  $$$$$$\  $$\   $$\ 
$$\$$\$$ $$ | \____$$\ \$$\ $$  |$$  __$$\ $$ |  $$ |
$$ \$$$  $$ | $$$$$$$ | \$$$$  / $$ /  $$ |$$ |  $$ |
$$ |\$  /$$ |$$  __$$ | $$  $$<  $$ |  $$ |$$ |  $$ |
$$ | \_/ $$ |\$$$$$$$ |$$  /\$$\ \$$$$$$  |\$$$$$$  |
\__|     \__| \_______|\__/  \__| \______/  \______/

 * @ Author: Maxou
 * @ Create Time: 1970-01-01 01:00:00
 */

#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string);
        ClapTrap(std::string, std::string);
        ClapTrap(ClapTrap&);
        ClapTrap& operator=(const ClapTrap&);
        ~ClapTrap();

        /*=== GETTERS ===*/
        std::string getName(void) const;
        int getHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getAttackDamage(void) const;

        /*=== GETTERS ===*/
        void    setHitPoints(int points);
        void    setEnergyPoints(int points);
        void    setAttackDamage(int points);

        /*=== MEMBER FUNCTIONS ===*/
        virtual void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    displayInfo() const;

    protected:
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
        std::string _name;
};