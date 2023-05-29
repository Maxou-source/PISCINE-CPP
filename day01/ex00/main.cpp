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
 * @ Create Time: 2023-05-13 12:25:05
 */

#include "Zombie.hpp"

int main()
{
    std::cout << "this Zombie data is from the stack" << std::endl;
    Zombie maxou("maxou");
    maxou.announce();

    std::cout << "\nthis Zombie data is from the heap" << std::endl;
    Zombie *jm = newZombie("jm");
    jm->announce();


    std::cout << "\nfrom the stack therefore created from another function" << std::endl;
    randomChump("Mousslim");

    delete jm;
}