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

#include "Animal.hpp"
#include "DogAndCat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();

    std::cout << "\n" << std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound();

    std::cout << "\n" << std::endl;

    delete j;
    delete i;
    delete meta;

    std::cout << "\n" << std::endl;

    WrongAnimal *meta2 = new WrongAnimal();
    WrongAnimal *k = new WrongAnimal();

    std::cout << "\n" << std::endl;

    meta2->makeSound();
    k->makeSound();

    std::cout << "\n" << std::endl;
    
    delete meta2;
    delete k;
}