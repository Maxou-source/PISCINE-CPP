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
* @ Create Time: 2023-05-29 01:26:42
*/

#include "AMateria.hpp"
#include <iostream>
#include <string>

/*======== CONSTRUCTORS ========*/

AMateria::AMateria(void)
{
    std::cout << "AMATERIA constructor called" << std::endl;
    _type = "notype";
}

AMateria::AMateria(const AMateria& rhs)
{
    std::cout << "AMATERIA copy constructor called" << std::endl;
    _type = rhs._type;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMATERIA param type constructor called" << std::endl;
    _type = type;
}

/*++++ Overload = operator ++++*/

AMateria& AMateria::operator=(const AMateria& rhs)
{
    std::cout << "AMATERIA assignement operator called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

/*++++++++*/

/*===============================*/

/*======== GETTERS ========*/

std::string const & AMateria::getType() const
{
    return (_type);
}

/*===============================*/

/*======== DESTRUCTORS ========*/

AMateria::~AMateria(void)
{
    std::cout << "AMATERIA destructor called" << std::endl;
}

/*===============================*/

