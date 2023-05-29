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
 * @ Create Time: 2023-05-20 14:51:19
 */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0){}
Point::~Point(void){}

Point::Point(const float x, const float y) : _x(x), _y(y){}

Point::Point(Point& copy): _x(copy.getX().toFloat()), _y(copy.getY().toFloat()) {}

Fixed& Point::getX(void) const
{
    return const_cast<Fixed&>(_x);
}

Point& Point::operator=(const Point& pt)
{
    (void) pt;
    return (*this);
}

Fixed& Point::getY(void) const
{
    return const_cast<Fixed&>(_y);
}