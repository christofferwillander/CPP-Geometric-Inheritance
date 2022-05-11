#ifndef BOX_H
#define BOX_H

class Box
{
private:
	int width;
	int height;

public:
	Box(int width, int height);
	Box();
	virtual ~Box();
	int getWidth() const;
	int getHeight() const;
};

#endif