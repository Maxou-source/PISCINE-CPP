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
 * @ Create Time: 2023-05-28 11:52:47
 */


#pragma once

#include <iostream>
#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal
{
    public:
        /*=== Constructors ===*/
        WrongCat(void);
        WrongCat(const WrongCat&);
        WrongCat& operator=(const WrongCat& rhs);
        /*=== Destructors ===*/
        ~WrongCat();

        /*=== Member Function ===*/
        void    makeSound(void) const;   
};
