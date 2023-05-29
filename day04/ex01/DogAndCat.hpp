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
 * @ Create Time: 2023-05-27 14:25:38
 */

#pragma once

#include "Animal.hpp"
#include "Brains.hpp"

class Dog : public Animal
{
    public:
        /*=== Constructors ===*/
        Dog(void);
        Dog(const Dog&);
        Dog& operator=(const Dog& rhs);
        /*=== Destructors ===*/
        ~Dog();

        /*=== Setters && Getters ===*/
        Brain  *getBrain(void) const;
        void   setIdea(std::string, int);

        /*=== Member Function ===*/
        void    makeSound(void) const;
    private:
        Brain   *_brain;
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

        Brain  *getBrain(void) const;
        void   setIdea(std::string, int);
        /*=== Member Function ===*/
        void    makeSound(void) const;
    private:
        Brain   *_brain;
};