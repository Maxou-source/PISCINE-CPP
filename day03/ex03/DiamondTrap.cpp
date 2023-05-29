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
 * @ Create Time: 2023-05-23 00:12:49
 */

#include "DiamondTrap.hpp"

/*
hp 100
ep 50
ad 30
*/

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "Diamond param constructor called" << std::endl;
    ClapTrap::_name = "_clap_name_" + name;
    _name = name;
    _hitPoints = FragTrap::_hitPoints;
    std::cout << "_hitpoints" << _hitPoints << std::endl;
    _attackDamage = 30;// FragTrap::_attackDamage;
    _energyPoints = ScavTrap::_energyPoints;
    std::cout << "_energy points" << _energyPoints << std::endl;
    std::cout << "_attack" << _attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
    _name = "no name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    ClapTrap::_name = "_clap_name_" + _name;
    std::cout << "Default constructor called" << std::endl;
}