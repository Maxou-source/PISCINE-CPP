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
 * @ Create Time: 2023-05-19 02:17:53
 */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream &os, const Fixed& fix)
{
    os << fix.toFloat();
    return (os);
}

int main()
{
    Fixed   a;
    Fixed const b(42);
    Fixed const c(42.42f);
    Fixed const d( b );

    // a = Fixed(1234.4321f);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << "as integer" << std::endl;
    std::cout << "b is " << b.toInt() << "as integer" << std::endl;
    std::cout << "c is " << c.toInt() << "as integer" << std::endl;
    std::cout << "d is " << d.toInt() << "as integer" << std::endl;


    // std::cout << "it 's like this " << c.getRawBits() << std::endl;

    // std::cout << "================================" << std::endl;

    // float nb = 30.5; 
    // printBits(7808);
    // printBits(*(int *)&nb);
}