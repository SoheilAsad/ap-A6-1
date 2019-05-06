#ifndef __SPHERE_H__
#define __SPHERE_H__   

#include <iostream>
#include <string>

#include "shape.h"

class Sphere : public Shape
{
protected:
	int radius;
public:
	Sphere(int _x, int _y, int _z,int _radius);
	virtual std::string get_type() const;
	virtual void scale(int factor) ;
	virtual int volume() const ;
};

#endif