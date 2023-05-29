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

#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
	/*=== Constructors and destructors ===*/
		HumanA(std::string name, Weapon& arms);

	/* === Member functions === */
		void	attack();

	/*=== setters ===*/
	/*=== getters ===*/
		const std::string&	getName(void) const;
		const Weapon&		getWeapon(void) const;

	private:
		Weapon&		_arms;
		std::string	_name;
};

#endif