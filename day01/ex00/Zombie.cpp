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
 * @ Create Time: 2023-05-13 12:25:00
 */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    // Zombie  * tmp =  new Zombie(name);
    return new Zombie(name);
}

void    Zombie::announce(void)
{
    std::cout << Zombie::_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void    randomChump( std::string name )
{
    Zombie random(name);
    random.announce();
}

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout  << "Zombie named " << name << " created" << std::endl;
}