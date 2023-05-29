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
 * @ Create Time: 2023-05-21 23:16:22
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
