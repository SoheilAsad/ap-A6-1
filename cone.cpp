#include <iostream>
#include <string>
#include <cmath>

#include "shape.h"
#include "cone.h"

using namespace std;

const double PI = 3.14 ;

Cone::Cone(int _x, int _y, int _z, int _radius, int _height)
    : Shape(_x,_y,_z)
{
    radius = _radius ;
    height = _height ;
}

std::string Cone::get_type() const
{
    return "Cone" ;
}

void Cone::scale(int factor)
{
    radius *= factor ;
    height *= factor ;
}

int Cone::volume() const
{
    return int( (double(1)/3) * PI * pow(radius,2) * height ) /1 ;
}
