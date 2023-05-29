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
 * @ Create Time: 2023-05-28 02:32:37
 */

#include "Animal.hpp"


/*======== CONSTRUCTORS ========*/

Animal::Animal(void)
{
    std::cout << "Animal <default> constructor called" << std::endl;
    _type = "default";
}

Animal::Animal(const Animal& copy)
{
    std::cout << "Animal <copy> constructor called" << std::endl;
    _type = copy._type;
}

/*++++ Overload = oprator ++++*/

Animal& Animal::operator=(const Animal& rhs)
{
    std::cout << "Animal <copy assignement> opeartor called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

/*++++++++*/

/*===============================*/

/*======== DESTRUCTORS ========*/

Animal::~Animal(void)
{
    std::cout << "Animal <destructor> called" << std::endl;
}

/*===============================*/

/*======== MEMBER FUNCTIONS ========*/

void    Animal::makeSound(void) const
{
    std::cout << _type << " : hello" << std::endl;
}

/*===============================*/
