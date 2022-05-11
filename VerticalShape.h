#ifndef VERTICALSHAPE_H
#define VERTICALSHAPE_H
#include "Shape.h"

class VerticalShape:public Shape
{
private:
	int yDirection;

public:
	VerticalShape(int xPos, int yPos, int width, int height, int step);
	VerticalShape();
	VerticalShape(const VerticalShape& origObj);
	VerticalShape& operator = (const VerticalShape& origObj);
	virtual ~VerticalShape();
	void changeDirection();
	string getDirectionAsString() const;
	string startString() const;
	void move() const;
};

#endif