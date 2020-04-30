#pragma once
//#include "header.h"

class Tank
{
private:
	double baseAngle;
	double cannonAngle;
	sf::RectangleShape base;
	sf::RectangleShape cannon;
public:
	Tank(int x, int y, char c);
	void setBaseAngle();
	void move(double speed, int dir);
	void rotate(int dir);
	void rotateCannon(int dir);
	void setCannonAngle();
	void draww(sf::RenderWindow window);
	sf::RectangleShape getBase();
	sf::RectangleShape getCannon();

	//Bullet& fire(angle, barrelx, barrely)
};