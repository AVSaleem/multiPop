#include "externals.h"
/*
NAMES:	Edwin Ramirez, Caden Silberlicht, Adam Szymanski, 
		Amy Nguyen
PROJECT:PA9
GAME:	"Bazinga!" is a game that puts you on ince, and
		you must avoid the "solos" on ice by moving around.
		You have three lives.
DATE:	May 1st 2020
*/
Steve::Steve() {
	name = "Steve";
	box.setSize(sf::Vector2f(60, 80));
	box.setOrigin(sf::Vector2f(30, 40));
	box.setFillColor(sf::Color(110, 20, 50));
	x = 200;
	y = 200;
	angle = 0;
	R = 35;
}

Steve::Steve(int X, int Y, int Radius)
{
	name = "Steve";
	box.setSize(sf::Vector2f(60, 80));
	box.setOrigin(sf::Vector2f(30, 40));
	box.setFillColor(sf::Color(150, 20, 90));
	x = X;
	y = Y;
	angle = 0;
	R = Radius;
}

void Steve::update(float xx, float yy, bool isDie)
{
	if (thrust)
	{
		dx += cos(angle * (PI / 180)) * 0.2; //uses trig to determine dx and dy to go a certain direction for acceleration of thrust
		dy += sin(angle * (PI / 180)) * 0.2;
	}
	else
	{
		dx *= 0.99;
		dy *= 0.99; //decelerates
	}

	int maxSpeed = 15;
	float speed = sqrt(dx * dx + dy * dy);  //limits speed
	if (speed > maxSpeed)
	{
		dx *= maxSpeed / speed;
		dy *= maxSpeed / speed;
	}

	x += dx;
	y += dy; //updates movement

	if (x > W) //allows movent wraps around to the other side when player goes offscreen
		x = 0;
	if (x < 0)
		x = W;
	if (y > H)
		y = 0;
	if (y < 0)
		y = H;
}