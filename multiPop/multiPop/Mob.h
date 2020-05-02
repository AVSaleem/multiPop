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
	Mob();
	Mob(int X, int Y, float Angle, int Radius);

	Mob(int X, int Y, int Radius);

	virtual void update(float xx, float yy, bool isDie);

	void draw(RenderWindow& bazinga); //draws mobs and updates positions of shapes and hitboxes

	virtual ~Mob();
};