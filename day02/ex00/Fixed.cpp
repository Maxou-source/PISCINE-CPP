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
 * @ Create Time: 2023-05-19 00:53:50
 */

#include "Fixed.hpp"

/*=== Constructors && Destructors ===*/
Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _fixed = 0;
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed = fix._fixed;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor Called" << std::endl;
}

/*=== Setters && Getters ===*/

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed;
}

void Fixed::setRawBits(int const raw)
{
    _fixed = raw;
}

/*===Overloads===*/
Fixed &Fixed::operator=(const Fixed& fix)
{
    // Fixed new_fix;s

    std::cout << "Copy assignement operator called" << std::endl;
    this->_fixed = fix.getRawBits();
    return (*this);
}