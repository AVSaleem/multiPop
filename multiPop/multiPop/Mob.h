/*
NAMES:	Edwin Ramirez, Caden Silberlicht, Adam Szymanski, 
		Amy Nguyen
PROJECT:PA9
GAME:	"Bazinga!" is a game that puts you on ince, and
		you must avoid the "solos" on ice by moving around.
		You have three lives.
DATE:	May 1st 2020
*/
#pragma once
class Mob
{
public:
	float x, y, dx, dy, R, angle;
	int life;
	std::string name;
	sf::RectangleShape box;
	Mob()
	{
		life = 3;
	}
	Mob(int X, int Y, float Angle, int Radius) {
		x = X;
		y = Y;
		angle = Angle;
		R = Radius;
		life = 3;
		box.setFillColor(sf::Color(150, 20, 90));
	}

	Mob(int X, int Y, int Radius) {
		x = X;
		y = Y;
		angle = 0;
		R = Radius;
	}

	virtual void update(float xx, float yy, bool isDie) {};

	void draw(RenderWindow& bazinga) //draws mobs and updates positions of shapes and hitboxes
	{
		box.setPosition(x, y);
		box.setRotation(angle + 90); 
		bazinga.draw(box);
		CircleShape circle(R); //hitbox
		circle.setFillColor(Color(255, 0, 0, 170));
		circle.setPosition(x, y);
		circle.setOrigin(R, R);
	}

	virtual ~Mob() {};
};