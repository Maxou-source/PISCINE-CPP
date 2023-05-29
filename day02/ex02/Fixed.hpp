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
 * @ Create Time: 2023-05-20 02:47:58
 */

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
        bool operator==(const Fixed&);
        bool operator!=(const Fixed&);

        bool operator>=(const Fixed&);
        bool operator<=(const Fixed&);

        bool operator>(const Fixed&);
        bool operator<(const Fixed&);

        Fixed& operator=(const Fixed&);

        Fixed& operator++();    // ++x
        Fixed  operator++(int fix);  //x++  
 
        Fixed& operator--();    // --x
        Fixed  operator--(int fix);  //x--   

        Fixed operator*(const Fixed&);
        Fixed operator+(const Fixed&);
        Fixed operator-(const Fixed&);
        Fixed operator/(const Fixed&);


    private:
        int                 _fixed;
        static const int    _fracts = 8;
};

void    printBits(int a);

Fixed&    min(Fixed& a, Fixed& b);
Fixed&    min(const Fixed& a, const Fixed& b);

Fixed&    max(Fixed& a, Fixed& b);
Fixed&    max(const Fixed& a, const Fixed& b);