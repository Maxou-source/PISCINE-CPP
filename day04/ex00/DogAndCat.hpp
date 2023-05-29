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

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        /*=== Constructors ===*/
        Dog(void);
        Dog(const Dog&);
        Dog& operator=(const Dog& rhs);
        /*=== Destructors ===*/
        ~Dog();

        /*=== Member Function ===*/
        void    makeSound(void) const;
};

class Cat : public Animal
{
    public:
        /*=== Constructors ===*/
        Cat(void);
        Cat(const Cat&);
        Cat& operator=(const Cat& rhs);
        /*=== Destructors ===*/
        ~Cat();

        /*=== Member Function ===*/
        void    makeSound(void) const;
};