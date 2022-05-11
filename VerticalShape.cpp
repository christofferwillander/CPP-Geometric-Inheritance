#include "VerticalShape.h"

VerticalShape::VerticalShape(int xPos, int yPos, int width, int height, int step)
:Shape(xPos, yPos, width, height, step)
{
	this->yDirection = DOWN;
}

VerticalShape::VerticalShape()
:Shape()
{
	this->yDirection = DOWN;
}

VerticalShape::VerticalShape(const VerticalShape & origObj)
:Shape(origObj)
{
	this->yDirection = origObj.yDirection;
}

VerticalShape & VerticalShape::operator=(const VerticalShape & origObj)
{
	if (this != &origObj)
	{
		Shape::operator=(origObj);
		this->yDirection = origObj.yDirection;
	}

	return *this;
}

VerticalShape::~VerticalShape()
{

}

void VerticalShape::changeDirection()
{
	if (this->yDirection == UP)
	{
		this->yDirection = DOWN;
	}
	else
	{
		this->yDirection = UP;
	}
}

string VerticalShape::getDirectionAsString() const
{
	if (this->yDirection == DOWN)
	{
		return "DOWN";
	}
	else
	{
		return "UP";
	}

	return "";
}

string VerticalShape::startString() const
{
	return "Vertical:";
}

void VerticalShape::move() const
{
	int movementConstant = 0;

	if (this->yDirection == DOWN)
	{
		movementConstant = 1;
	}
	else
	{
		movementConstant = -1;
	}

	Shape::changeCoord(0,(Shape::getStep() * movementConstant));
}
