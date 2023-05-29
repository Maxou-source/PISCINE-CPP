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
 * @ Create Time: 2023-05-21 23:19:46
 */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap maxou("maxou");
    ClapTrap Rayan("Rayan");
    std::cout << std::endl;

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