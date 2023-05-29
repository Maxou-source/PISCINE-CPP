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

#include "DogAndCat.hpp"

/*=+=+=+=+=+=+=+=+=+=+=+=+ DOG =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = "Dog";
}

Dog::Dog(const Dog& copy)
{
    std::cout << "Dog default constructor called" << std::endl;
    _type = copy._type;
}

/*++++ Overload = oprator ++++*/

Dog& Dog::operator=(const Dog& rhs)
{
    this->_type = rhs._type;
    return (*this);
}

/*++++++++*/

/*======== DESTRUCTORS ========*/

Dog::~Dog(void)
{
    std::cout << "Destructor dog called" << std::endl;
}

/*===============================*/

/*===============================*/

void    Dog::makeSound(void) const
{
    std::cout << "bark: Woooooooof" << std::endl;
}

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/


/*=+=+=+=+=+=+=+=+=+=+=+=+ CAT =+=+=+=+=+=+=+=+=+=+=+=+*/

/*======== CONSTRUCTORS ========*/

Cat::Cat(void)
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = "Cat";
}

Cat::Cat(const Cat& copy)
{
    std::cout << "Cat default constructor called" << std::endl;
    _type = copy._type;
}

/*++++ Overload = oprator ++++*/

Cat& Cat::operator=(const Cat& rhs)
{
    this->_type = rhs._type;
    return (*this);
}

/*++++++++*/

/*======== DESTRUCTORS ========*/

Cat::~Cat(void)
{
    std::cout << "Destructor cat called" << std::endl;
}

/*===============================*/

/*===============================*/

void    Cat::makeSound(void) const
{
    std::cout << "bark: Woooooooof" << std::endl;
}

/*=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+*/