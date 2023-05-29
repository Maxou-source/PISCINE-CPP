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

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	/*=== Constructors ===*/
    public:
        HumanB(std::string name);

        /* === Member functions === */
        void    attack();

        /*=== setters ===*/
        void   setWeapon(Weapon &); 
	    /*=== getters ===*/
        const std::string&	getName(void) const;
        const Weapon*		getWeapon(void) const;

    private:
        Weapon *     _arms;
        std::string _name;
};

#endif