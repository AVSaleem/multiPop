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


	Mob::Mob()
	{
		life = 3;
	}
	Mob::Mob(int X, int Y, float Angle, int Radius) {
		x = X;
		y = Y;
		angle = Angle;
		R = Radius;
		life = 3;
		box.setFillColor(sf::Color(150, 20, 90));
	}

	Mob::Mob(int X, int Y, int Radius) {
		x = X;
		y = Y;
		angle = 0;
		R = Radius;
	}

	void Mob::update(float xx, float yy, bool isDie) {};

	void Mob::draw(RenderWindow& bazinga) //draws mobs and updates positions of shapes and hitboxes
	{
		box.setPosition(x, y);
		box.setRotation(angle + 90);
		bazinga.draw(box);
		CircleShape circle(R); //hitbox
		circle.setFillColor(Color(255, 0, 0, 170));
		circle.setPosition(x, y);
		circle.setOrigin(R, R);
	}

	Mob::~Mob() {};