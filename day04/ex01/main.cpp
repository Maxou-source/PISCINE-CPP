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
 * @ Create Time: 2023-05-27 14:28:36
 */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "DogAndCat.hpp"

/*
Ask how to make this work

Cat Sherlock = i;

*/

int main()
{
    std::cout << "DOG && CAT" << std::endl;
    Animal* j = new Dog();
    Animal* i = new Cat();

    std::cout << "\n";
    
    std::cout << "\nBASIC IDEAS TESTS" << std::endl;

    std::cout << "Idea : " << i->getBrain()->ideas[2] << std::endl;
    i->setIdea("i love croquettes!!", 2);
    std::cout << "Idea : " << i->getBrain()->ideas[2] << "\n" << std::endl;

    delete j;
    delete i;

    std::cout << "\nDEEP COPY TESTS\n(using copy construtor)" << std::endl;
    Cat* Sherlock = new Cat();
    Sherlock->setIdea("Am i the copy?", 0);
    Cat Watson = *Sherlock;
    delete Sherlock; std::cout << "deleting Sherlock" << std::endl;
    std::cout << "Idea : " << Watson.getBrain()->ideas[0] << std::endl;
/*Showing that there is really a deep copy and not just passing the pointers*/

    std::cout << "\n" << std::endl;

    Animal *tab[] = 
    {
        new Dog(),
        new Cat(),
        new Dog(),
        new Cat()
    };

    for (int i = 0; i < 4; i++)
    {
        tab[i]->makeSound();
    }

    for (int i = 0; i < 4; i++)
        delete tab[i];
/*Required by the subject*/

    std::cout << "\n" << std::endl;


    return (0);
}