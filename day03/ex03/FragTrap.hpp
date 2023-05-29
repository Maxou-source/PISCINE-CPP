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
 * @ Create Time: 2023-05-23 00:15:41
 */


#pragma once

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
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

class FragTrap : virtual public ClapTrap
{
    public:
        /*=== Constructors ===*/
        FragTrap();
        FragTrap(FragTrap&);
        FragTrap& operator=(const FragTrap&);
        FragTrap(std::string name);

        /*=== not required ===*/
        FragTrap(std::string name, std::string b);
        
        /*=== Member functions===*/
        void    attack(const std::string& target);
        void    highFiveGuys();

        /*=== Destructors ===*/
        ~FragTrap();

};