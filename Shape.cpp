#include "Shape.h"

void Shape::freeMemory()
{
	delete this->coords;
	delete this->box;
}

Shape::Shape(int xPos, int yPos, int width, int height, int step)
{
	this->coords = new Coord(xPos, yPos);
	this->box = new Box(width, height);
	this->step = step;
}

Shape::Shape()
{
	this->coords = new Coord(0, 0);
	this->box = new Box(0, 0);
	this->step = 0;
}

Shape::Shape(const Shape & origObj)
{
	this->step = origObj.step;
	this->coords = new Coord(origObj.coords->getXPos(), origObj.coords->getYPos());
	this->box = new Box(origObj.box->getWidth(), origObj.box->getHeight());
}

Shape & Shape::operator=(const Shape & origObj)
{
	if (this != &origObj)
	{
		this->freeMemory();

		this->step = origObj.step;
		this->coords = new Coord(origObj.coords->getXPos(), origObj.coords->getYPos());
		this->box = new Box(origObj.box->getWidth(), origObj.box->getHeight());
	}

	return *this;
}

Shape::~Shape()
{
	this->freeMemory();
}

void Shape::changeCoord(int xChange, int yChange) const
{
	this->coords->changeXPos(xChange);
	this->coords->changeYPos(yChange);
}

int Shape::getStep() const
{
	return this->step;
}

void Shape::changeStep(int change)
{
	if (change < 0)
	{
		change = (-1) * change;
	}

	this->step += change;
}

bool Shape::intersectsWith(const Shape & shape) const
{
	bool intersectX = false;
	bool intersectY = false;

	if (this->coords->getXPos() > (shape.coords->getXPos() + shape.box->getWidth()) || shape.coords->getXPos() > (this->coords->getXPos() + this->box->getWidth())) // If one of the rectangles is to the left of the other
	{
		intersectX = false;
	}
	else
	{
		intersectX = true;
	}

	if ((this->coords->getYPos() < (shape.coords->getYPos() - shape.box->getHeight()) || shape.coords->getYPos() < (this->coords->getYPos() - this->box->getHeight())) && intersectX == true) // If one of the rectangles is above the other - only executing if rectangles intersect in x-axis
	{
		intersectY = false;
	}
	else
	{
		intersectY = true;
	}

	return (intersectX && intersectY);
}

string Shape::toString() const
{
	return this->startString() + "\nPosition: X: " + to_string(this->coords->getXPos()) + " Y: " + to_string(this->coords->getYPos()) + "\nDirection: " + this->getDirectionAsString() + "\nStep: " + to_string(this->step) + "\nWidth: " + to_string(this->box->getWidth()) + "  Height: " + to_string(this->box->getHeight());
}
