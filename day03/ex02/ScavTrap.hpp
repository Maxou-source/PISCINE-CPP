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

#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

/*
Canonical:
-Default constructor
-copy constructor
-copy assignement operator
-Destructor

In this ScavTrap.hpp
I have two Param constructors 
*/

class ScavTrap : public ClapTrap
{
    public:
        /*=== Constructors ===*/
        ScavTrap();
        ScavTrap(ScavTrap&);
        ScavTrap& operator=(const ScavTrap&);
        ScavTrap(std::string name);

        /*=== not required ===*/
        ScavTrap(std::string name, std::string b);
        
        /*=== Member functions===*/
        void attack(const std::string& target);
        void    guardGate();

        /*=== Destructors ===*/
        ~ScavTrap();

};
