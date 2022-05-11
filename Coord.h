#ifndef COORD_H
#define COORD_H

class Coord
{
private:
	int xPos;
	int yPos;

public:
	Coord(int xPos, int yPos);
	Coord();
	virtual ~Coord();
	int getXPos() const;
	int getYPos() const;
	void changeXPos(int change);
	void changeYPos(int change);
};

#endif