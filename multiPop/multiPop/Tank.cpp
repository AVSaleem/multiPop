/*#include "externals.h"

void Tank::setBaseAngle()
{
	baseAngle = (base.getRotation() * PI / 180) + PI / 2;
}
void Tank::move(double speed, int dir)
{
	base.move(speed * ::cos(baseAngle) * dir, speed * ::sin(baseAngle) * dir);
	cannon.setPosition(base.getPosition());

}
void Tank::rotate(int dir)
{
	base.rotate(.125 * dir);
}

void Tank::rotateCannon(int dir)
{
	cannon.rotate(.125 * dir);
}
void Tank::setCannonAngle()
{
	cannonAngle = (cannon.getRotation() * PI / 180) + PI / 2;
}
void Tank::draww(sf::RenderWindow window)
{
	window.draw(base);
	window.draw(cannon);
}
sf::RectangleShape Tank::getBase()
{
	return base;
}
sf::RectangleShape Tank::getCannon()
{
	return cannon;
}

void Tank::tick()
{

}

Tank::Tank(float xx, float yy, char c) : Sprite(x,y)
{
	base.setSize(sf::Vector2f(40, 50));
	//sf::RectangleShape base(sf::Vector2f(40, 50));
	if (c == 'r') {
		base.setFillColor(sf::Color::Red);
	}
	if (c == 'g') {
		base.setFillColor(sf::Color::Green);
	}
	base.setOrigin(20, 25);
	base.setPosition(xx, yy);
	cannon.setSize(sf::Vector2f(10, 45));
	cannon.setFillColor(sf::Color::Blue);
	cannon.setOrigin(5, 40);
	cannon.setPosition(xx, yy);
	baseAngle = 0;
	cannonAngle = 0;
}

//Bullet* Tank::fire() {
//	//Bullet* shot = new Bullet(cannonAngle, cannon.getPosition().x, cannon.getPosition().y);
//
//	//return shot;
//}
*/