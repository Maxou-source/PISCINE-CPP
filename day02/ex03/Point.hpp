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
 * @ Create Time: 2023-05-20 14:51:47
 */

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point
{
    public:
        Point();
        ~Point();
        Point(const float a , const float b);
        Point(Point&);

        Point& operator=(const Point&);

        Fixed& getX(void) const; 
        Fixed& getY(void) const; 

    private:
        const Fixed   _x;
        const Fixed  _y;
};

float   seg_len(Point &a, Point &b);
bool bsp(Point const a, Point const b, Point const c, Point const point);