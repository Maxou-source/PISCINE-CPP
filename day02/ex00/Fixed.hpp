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
 * @ Create Time: 2023-05-19 00:53:55
 */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
    public:
        /*===Constructors===*/
        Fixed();
        Fixed(const Fixed &); /*by copy*/

        /*===Destructors===*/
        ~Fixed();  

        /*=== Setters & Getters===*/
        int getRawBits(void) const;
        void setRawBits(int const raw);
        /*===overload operator===*/
        Fixed &operator=(const Fixed&);    

    private:
        int                 _fixed;
        static const int    _fracts = 8;
};