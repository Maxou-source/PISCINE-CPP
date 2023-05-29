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
 * @ Create Time: 2023-05-19 02:18:05
 */

#include "Fixed.hpp"
/*
demain a proteger

*/
/*=== Constructors && Destructors ===*/
Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _fixed = 0;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    _fixed = (nb << _fracts);
}
/*
on a decaler nb de 8 positions
exemple: base 10 : 42
00000000 00000000 00000000 00101010
00000000 00000000 00101010 00000000


0     0   1  0  1010
128  64  32 16  8421
624
2 + 8 + 32
*/

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    _fixed = nb * (float)(1 << _fracts);
}
/*
un float est ecris sur 4 bytes egalement donc 32 bits
sauf que un decalage binaire n'est pas possible

le premier element s'agit du signe 1 pour negatif et zero pour positif


   0    00000000     00000000000000000000000
signe   exposant          mantisse


representation du nombre 30.5
   131-127     1 + 2^-1 + 2^-2 + 2^-3 + 0 * 2^4 + 2^-5 = 1.90625
0 10000011  11101000000000000000000

on a donc 1.90625 * 2^4
7808
resultat des courses beaucoup plus simple de le multiplie par 256 
et de le foutre dans un int

*/

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fix;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor Called" << std::endl;
}

/*=== Setters && Getters ===*/

int Fixed::getRawBits(void) const
{
    return _fixed;
    // return (float)_fixed / (float)(1 << _fracts);
}

void Fixed::setRawBits(int const raw)
{
    _fixed = raw;
}

/*======================METHODS=======================*/

float   Fixed::toFloat(void) const
{
    return (float)_fixed / (float)(1 << _fracts);
}

int   Fixed::toInt(void) const
{
    return  _fixed >> _fracts;
    // return (float)_fixed / (float)(1 << _fracts);
}

/*===Overloads===*/
Fixed& Fixed::operator=(const Fixed& fix)
{
    std::cout << "Copy assignement operator called" << std::endl;
    this->_fixed = fix.getRawBits();
    return (*this);
}

// std::ostream& operator<<(std::ostream &os, const Fixed& fix)
// {
//     os << fix.getRawBits();// << "random";
//     return (os);
// }


/*==================UTILS==================*/

void    printBits(int a)
{
    std::cout << "value = " << std::bitset<32>(a)  << std::endl;
    // std::cout << "value = " << std::endl
}
