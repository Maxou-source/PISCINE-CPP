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
 * @ Create Time: 2023-05-27 14:10:46
 */

#include "WrongCat.hpp"

/*======== CONSTRUCTORS ========*/

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor called" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
    std::cout << "WrongCat default constructor called" << std::endl;
    _type = copy._type;
}

/*++++ Overload = oprator ++++*/

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
    this->_type = rhs._type;
    return (*this);
}

/*++++++++*/

/*======== DESTRUCTORS ========*/

WrongCat::~WrongCat(void)
{
    std::cout << "Destructor WrongCat called" << std::endl;
}

/*===============================*/

/*===============================*/

void    WrongCat::makeSound(void) const
{
    std::cout << "bark: Woooooooof" << std::endl;
}
