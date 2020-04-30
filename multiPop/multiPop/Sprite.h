/*
Name: Amy Nguyen
Class: CSC 122
Assignment: PA9
*/
#pragma once
#include <SFML/Graphics.hpp>
class Sprite
{
private:
	sf::RectangleShape body;
	float x;
	float y;
public:
	Sprite(sf::Texture *texture, float x, float y);
	~Sprite();
	
	float getX();
	float getY();
	void Draw(sf::RenderWindow&window);
	void moveSprite(float x, float y);
};

