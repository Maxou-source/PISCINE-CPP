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
 * @ Create Time: 2023-05-21 11:54:33
 */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "===TESTING CONSTRUCTORS===" << std::endl;
    ClapTrap maxou("maxou");
    ClapTrap maxouCopy(maxou);
    ClapTrap maxouOverload = maxou;

    std::cout << "\nDisplay maxou >> " << std::endl;
    maxou.displayInfo();
    std::cout << "\nDisplay maxou Copy >> " << std::endl;
    maxouCopy.displayInfo();
    std::cout << "\nDisplay maxou Overload " << std::endl;
    maxouOverload.displayInfo();

    std::cout << "=== END TEST ===\n\n" <<  std::endl;

    maxou.attack("Maxou Copy");
    maxou.beRepaired(10);
    maxouCopy.takeDamage(10);
    std::cout << std::endl;

    maxou.displayInfo();
    std::cout << std::endl;
    maxouCopy.displayInfo();
    std::cout << std::endl;
}