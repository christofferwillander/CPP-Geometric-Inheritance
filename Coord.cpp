#include "Coord.h"

Coord::Coord(int xPos, int yPos)
{
	this->xPos = xPos;
	this->yPos = yPos;
}

Coord::Coord()
{
	this->xPos = 0;
	this->yPos = 0;
}

Coord::~Coord()
{

}

int Coord::getXPos() const
{
	return this->xPos;
}

int Coord::getYPos() const
{
	return this->yPos;
}

void Coord::changeXPos(int change)
{
	this->xPos += change;
}

void Coord::changeYPos(int change)
{
	this->yPos += change;
}
