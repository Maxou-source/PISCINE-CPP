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
 * @ Create Time: 2023-05-13 13:21:59
 */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (N < 0)
        return (0);
    Zombie *tab = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        tab[i].setName(name);
        std::cout << "Zombie named " << name << " created" << std::endl;
    }
    return (tab);
}
