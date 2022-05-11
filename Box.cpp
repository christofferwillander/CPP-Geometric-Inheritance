#include "Box.h"

Box::Box(int width, int height)
{
	this->width = width;
	this->height = height;
}

Box::Box()
{
	this->width = 0;
	this->height = 0;
}

Box::~Box()
{

}

int Box::getWidth() const
{
	return this->width;
}

int Box::getHeight() const
{
	return this->height;
}
