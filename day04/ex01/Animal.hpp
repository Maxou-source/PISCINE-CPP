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
 * @ Create Time: 2023-05-27 14:23:29
 */

#pragma once

#include <iostream>
#include <string>
#include "Brains.hpp"

class Animal
{
    public:
        /*=== Constructors ===*/
        Animal();
        Animal(const Animal&);
        Animal& operator=(const Animal& rhs);

        /*=== Destructors ===*/
        virtual ~Animal();

        virtual void   setIdea(std::string s, int n) {(void) s; (void) n;};
        virtual Brain* getBrain(void) const {return NULL;}
        /*=== Member Functions ===*/
        virtual void    makeSound(void) const;
        
    protected:
        std::string _type;
};