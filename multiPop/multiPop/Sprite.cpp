#include "Sprite.h"


Sprite::Sprite(sf::Texture* texture, float x, float y) {
	body.setTexture(texture);
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

