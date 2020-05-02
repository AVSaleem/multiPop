/*
NAMES:	Edwin Ramirez, Caden Silberlicht, Adam Szymanski, 
		Amy Nguyen
PROJECT:PA9
GAME:	"Bazinga!" is a game that puts you on ince, and
		you must avoid the "solos" on ice by moving around.
		You have three lives.
DATE:	May 1st 2020
*/
#include "externals.h"


Heart::Heart(int x, int y) {
	//sf::CircleShape circle;
	circle.setRadius(20);
	circle.setOutlineColor(Color::White);

	circle.setFillColor(Color(250, 0, 30));
	circle.setOutlineThickness(5);
	circle.setPosition(x, y);
	//circle.setOrigin(R, R);
}
Heart::~Heart() {
}

void Heart::draw(RenderWindow& bazinga)
{
	//circle.setPosition(x, y);
	//circle.setRotation(angle + 90);
	bazinga.draw(circle);
}
