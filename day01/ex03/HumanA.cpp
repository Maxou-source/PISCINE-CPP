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
 * @ Create Time: 2023-05-14 19:16:41
 */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arms): _arms(arms), _name(name)
{}

const	std::string& HumanA::getName(void) const
{
	return _name;
}

const	Weapon& HumanA::getWeapon(void) const
{
	return _arms;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _arms.getType() << std::endl;
}
