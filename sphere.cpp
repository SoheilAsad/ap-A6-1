#include <iostream>
#include <string>
#include <cmath>

#include "shape.h"
#include "sphere.h"

using namespace std;

const double PI = 3.14 ;

Sphere::Sphere(int _x, int _y, int _z,int _radius)
    : Shape(_x,_y,_z)
{
    radius = _radius ;
}

string Sphere::get_type() const
{
    return "Sphere" ;
}

void Sphere::scale(int factor)
{
    radius *= factor ;
}

int Sphere::volume() const 
{
    return int( (double(4)/3) * PI * pow(radius,3) ) /1 ;
}