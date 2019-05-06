#include <iostream>
#include <string>

#include "shape.h"
#include "cuboid.h"

using namespace std;

const double PI = 3.14 ;

Cuboid::Cuboid(int _x, int _y, int _z, int _width, int _height, int _depth)
    : Shape(_x,_y,_z)
{
    width = _width ;
    height = _height ;
    depth = _depth ;
}

std::string Cuboid::get_type() const
{
    return "Cuboid" ;
}

void Cuboid::scale(int factor)
{
    width *= factor ;
    height *= factor ;
    depth *= factor ;
}

int Cuboid::volume() const
{
    return width * height * depth ;
}