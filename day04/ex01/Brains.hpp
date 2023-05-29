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
 * @ Create Time: 2023-05-27 14:34:38
 */

#pragma once

#include <iostream>
#include <string>

class Brain
{
    public:
        /*=== Ideas ===*/
        std::string ideas[100];

        /*=== Constructors ===*/
        Brain();
        Brain(const Brain&);

        Brain& operator=(const Brain&);


        /*=== Destructors ===*/
        ~Brain();
        
};
