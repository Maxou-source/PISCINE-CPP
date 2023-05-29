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
 * @ Create Time: 2023-05-19 02:17:59
 */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
    public:
        /*===Constructors===*/
        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &); /*by copy*/

        /*===Destructors===*/
        ~Fixed();  

        /*=== Setters & Getters===*/
        int getRawBits(void) const;
        void    setRawBits(int const raw);

        /*==== Methods =====*/
        float   toFloat(void) const;
        int   toInt(void) const;
        /*===overload operator===*/
        Fixed& operator=(const Fixed&);    

    private:
        int                 _fixed;
        static const int    _fracts = 8;
};

void    printBits(int a);
// std::ostream &operator<<(std::ostream& os, Fixed&);    