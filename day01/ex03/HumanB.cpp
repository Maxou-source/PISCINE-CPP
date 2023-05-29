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


#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

const	std::string& HumanB::getName(void) const
{
	return _name;
}

const	Weapon* HumanB::getWeapon(void) const
{
	return _arms;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _arms->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &arms)
{_arms = &arms;}