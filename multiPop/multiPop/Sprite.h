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
	sf::Vector2f scale;
	float x;
	float y;
public:
	Sprite(sf::Color color, float x, float y);
	~Sprite();
	
	float getX();
	float getY();

	sf::Vector2f getScale();
	void setScale(float, float);

	void Draw(sf::RenderWindow&window);
	void moveSprite(float x, float y);
	sf::RectangleShape getBody();
};

