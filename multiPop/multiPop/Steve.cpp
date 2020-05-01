#include "externals.h"






/*#include "externals.h"

Steve::Steve(sf::Color color, float x, float y) : Sprite(color,x,y)
{
}

Steve::~Steve()
{
}
/*
void Steve::moveSprite(float xLimit, float yLimit )
{
	float xOffset =0.0, yOffset=0.0;
	int direction = -1;		// if 0 then go right, if 1 go left

	//get xOffset and make sure that its less than the limit
	xOffset = rand() % (int)xLimit + 1 + (rand() * 0.1);
	direction = rand() % 2;
	while ((this->x += xOffset) > xLimit || (this->x += xOffset) < 0) {
		xOffset = rand() % (int)xLimit + 1 + (rand() * 0.1);
		
		if (direction == 1)
			xOffset *= -1;
	}

	

	//get yOffset and make sure that its less than the limit
	yOffset = rand() % (int)yLimit + 1 + (rand() * 0.1);
	direction = rand() % 2;
	while ((this->y += yOffset) > yLimit || (this->y += yOffset) < 0) {
		yOffset = rand() % (int)yLimit + 1 + (rand() * 0.1);

		if (direction == 1)
			yOffset *= -1;
	}


	sf::Vector2f movement(xOffset, yOffset);
	body.move(movement);
	this->x += xOffset;
	this->y += yOffset;	
}
*/