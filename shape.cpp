#include <iostream>
#include <string>

#include "shape.h"

using namespace std;

Shape::Shape(int _x, int _y, int _z)
    : x(_x), y(_y), z(_z)
{
}

void Shape::move(int dx, int dy, int dz)
{
    x += dx ;
    y += dy ;
    z += dz ;
}

std::ostream& operator<<(std::ostream& out, const Shape* shape)
{
    out <<"type: " <<shape->get_type() <<", center: (" <<shape->x <<", " <<shape->y <<", " <<shape->z 
        <<"), volume: " <<shape->volume() <<endl ;
}