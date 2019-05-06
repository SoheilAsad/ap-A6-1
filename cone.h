#ifndef __CONE_H__
#define __CONE_H__

#include <iostream>
#include <string>

#include "shape.h"

class Cone : public Shape
{
protected:
	int radius;
    int height;
public:
	Cone(int _x, int _y, int _z, int _radius, int _height);
	virtual std::string get_type() const;
	virtual void scale(int factor) ;
	virtual int volume() const ;
};

#endif