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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap maxou("maxou");
    ClapTrap Rayan("Rayan");
    FragTrap Dieri("Dieri");
    std::cout << std::endl;

    Dieri.highFiveGuys();
    Dieri.displayInfo();
    maxou.displayInfo();

    maxou.attack("Rayan");
    Rayan.takeDamage(maxou.getAttackDamage());
    maxou.attack("Rayan");
    Rayan.takeDamage(maxou.getAttackDamage());
    std::cout << std::endl;

    maxou.displayInfo();
    Rayan.displayInfo();

    Rayan.attack("Maxou");
    // moha.takeDamage("Moha");
}