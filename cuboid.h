#ifndef __CUBOID_H__
#define __CUBOID_H__

#include <iostream>
#include <string>

#include "shape.h"

class Cuboid : public Shape
{
protected:
	int width;
    int height;
    int depth;
public:
	Cuboid(int _x, int _y, int _z, int _width, int _height, int _depth);
	virtual std::string get_type() const;
	virtual void scale(int factor) ;
	virtual int volume() const ;
};

#endif