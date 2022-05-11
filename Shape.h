#ifndef SHAPE_H
#define SHAPE_H
#include "Coord.h"
#include "Box.h"
#include <string>
using namespace std;

class Shape
{
public:
	static const int UP = 1;
	static const int DOWN = 2;
	static const int LEFT = 3;
	static const int RIGHT = 4;

private:
	int step;
	Coord* coords;
	Box* box;
	void freeMemory();

public:
	Shape(int xPos, int yPos, int width, int height, int step);
	Shape();
	Shape (const Shape& origObj);
	Shape& operator = (const Shape& origObj);
	~Shape();
	void changeCoord(int xChange, int yChange) const;
	int getStep() const;
	void changeStep(int change);
	bool intersectsWith(const Shape& shape) const;
	string toString() const;
	virtual void changeDirection() = 0;
	virtual string getDirectionAsString() const = 0;
	virtual string startString() const = 0;
	virtual void move() const = 0;
};

#endif