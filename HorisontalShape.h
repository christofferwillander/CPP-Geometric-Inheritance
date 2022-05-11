#ifndef HORISONTALSHAPE_H
#define HORISONTALSHAPE_H
#include "Shape.h"

class HorisontalShape:public Shape
{
private:
	int xDirection;

public:
	HorisontalShape(int xPos, int yPos, int width, int height, int step);
	HorisontalShape();
	HorisontalShape(const HorisontalShape& origObj);
	HorisontalShape& operator = (const HorisontalShape& origObj);
	virtual ~HorisontalShape();
	void changeDirection();
	string getDirectionAsString() const;
	string startString() const;
	void move() const;
};

#endif