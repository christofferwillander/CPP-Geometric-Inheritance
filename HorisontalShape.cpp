#include "HorisontalShape.h"

HorisontalShape::HorisontalShape(int xPos, int yPos, int width, int height, int step)
:Shape(xPos, yPos, width, height, step)
{
	this->xDirection = RIGHT;
}

HorisontalShape::HorisontalShape()
:Shape()
{
	this->xDirection = RIGHT;
}

HorisontalShape::HorisontalShape(const HorisontalShape & origObj)
:Shape(origObj)
{
	this->xDirection = origObj.xDirection;
}

HorisontalShape & HorisontalShape::operator=(const HorisontalShape & origObj)
{
	if (this != &origObj)
	{
		Shape::operator=(origObj);
		this->xDirection = origObj.xDirection;
	}

	return *this;
}

HorisontalShape::~HorisontalShape()
{

}

void HorisontalShape::changeDirection()
{
	if (this->xDirection == LEFT)
	{
		this->xDirection = RIGHT;
	}
	else
	{
		this->xDirection = LEFT;
	}
}

string HorisontalShape::getDirectionAsString() const
{
	if (this->xDirection == RIGHT)
	{
		return "RIGHT";
	}
	else
	{
		return "LEFT";
	}

	return "";
}

string HorisontalShape::startString() const
{
	return "Horisontal:";
}

void HorisontalShape::move() const
{
	int movementConstant = 0;

	if (this->xDirection == RIGHT)
	{
		movementConstant = 1;
	}
	else
	{
		movementConstant = -1;
	}

	Shape::changeCoord((Shape::getStep() * movementConstant), 0);
}
