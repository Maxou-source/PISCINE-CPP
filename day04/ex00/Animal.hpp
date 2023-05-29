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

#include <iostream>
#include <string>

/*
virtual ~Animal();
So basically the word virtual here
deblocks the static binding which means that now 
at run time it will be able to decide
which destructor it will call

in this case not only the Animal one 
but the Dog one as well

Questions i need to ask myself?

How to explain the meaning of virtual ?
-for the makesound function it 
is a precision at run time ->
if there is a function makeSound in my class 
that herit from animal then i will use
this one

-virtual for the destructor
same bullshit but with the destructors!
if for example like in the main we have only a 
pointer to Animal class that contains a new dog 
then at run time with we dont specify virtual for 
the destructor it will only call the animal destructor

*/

class Animal
{
    public:
        /*=== Constructors ===*/
        Animal();
        Animal(const Animal&);
        Animal& operator=(const Animal& rhs);

        /*=== Destructors ===*/
        virtual ~Animal();

        /*=== Member Functions ===*/
        virtual void    makeSound(void) const;
        
    protected:
        std::string _type;
};
