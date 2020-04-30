#include "externals.h"


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

