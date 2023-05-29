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
 * @ Create Time: 2023-05-20 14:51:53
 */

#include "Point.hpp"

float   seg_len(Point const &a, Point const &b)
{
    float Xa = a.getX().toFloat();
    float Ya = a.getY().toFloat();
    float Xb = b.getX().toFloat();
    float Yb = b.getY().toFloat();
    return std::sqrtf(((Xb - Xa) * (Xb - Xa)) + ((Yb - Ya) * (Yb - Ya)));
}

float   heron(float a, float b, float c)
{
    float   p = (a + b + c) / 2.;
    return std::sqrtf(p*(p-a)*(p-b)*(p-c)); 
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float   segment1 = seg_len(a , b);
    float   segment2 = seg_len(b , c);
    float   segment3 = seg_len(c , a);

    float   segment4 = seg_len(point, a);
    float   segment5 = seg_len(point, b);
    float   segment6 = seg_len(point, c);

    float area1 = heron(segment1, segment2, segment3);

    float area2 = heron(segment4, segment5, segment1); // point a b 
    float area3 = heron(segment5, segment6, segment2); // point b c
    float area4 = heron(segment4, segment6, segment3); // point a c 
    return (area1 == (area2 + area3 + area4));
}