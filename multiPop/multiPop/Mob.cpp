/*#include "externals.h"

	Mob::Mob()
	{
		life = 1;
	}
	Mob::Mob(int X, int Y, float Angle, int Radius) {
		x = X;
		y = Y;
		angle = Angle;
		R = radius;
	}

	Mob::Mob(int X, int Y, int Radius) {
		x = X;
		y = Y;
		angle = 0;
		R = radius;
	}
	/*
	void settings(int X,int Y,float Angle=0,int radius=1)
	{
	  x=X; y=Y;
	  angle = Angle;
	  R = radius;
	}

	void Mob::update(float xx, float yy) {};

	void Mob::draw(RenderWindow& bazinga)
	{
		box.setPosition(x, y);
		box.setRotation(angle + 90);
		bazinga.draw(box);
		CircleShape circle(R);
		circle.setFillColor(Color(255, 0, 0, 170));
		circle.setPosition(x, y);
		circle.setOrigin(R, R);
	}

*/
//virtual ~Mob() {}
/*
Sprite::Sprite(sf::Color color, float x, float y) {
	scale.x = 1;
	scale.y = 1;

	body.setScale(scale);
	body.setFillColor(color);
	body.setSize(sf::Vector2f(40, 50));
	body.setOrigin(20, 25);
	body.setPosition(x, y);

	this->x = x;
	this->y = y;
	alive = true;
}


Sprite::~Sprite()
{
}

float Sprite::getX()
{
	return this->x;
}

float Sprite::getY()
{
	return this->y;
}

int Sprite::getR() {
	return this->r;
}


sf::Vector2f Sprite::getScale() {
	return scale;
}

void Sprite::setScale(float xd, float yd) {
	scale.x *= xd;
	scale.y *= yd;
	body.setScale(scale);
}


void Sprite::Draw(sf::RenderWindow& window)
{
	window.draw(body);
}

void Sprite::moveSprite(float x, float y)
{
	sf::Vector2f movement(x, y);
	body.move(movement);
	this->x += x;
	this->y += y;
}

sf::RectangleShape Sprite::getBody() {
	return body;
}

bool Sprite::getAlive()
{
	return alive;
}

void Sprite::setAlive()
{
	this->alive = false;
}
*/