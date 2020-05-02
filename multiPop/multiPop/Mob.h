
/*
class Mob
{
public:
	float x, y, dx, dy, R, angle;
	bool life;
	string name;
	RectangleShape box;
	//sf::Texture::m_size
	Mob();
	Mob(int X, int Y, float Angle, int Radius);

	Mob(int X, int Y, int Radius);
	/*
	void settings(int X,int Y,float Angle=0,int radius=1)
	{
	  x=X; y=Y;
	  angle = Angle;
	  R = radius;
	}

	virtual void update(float xx, float yy);

	void draw(RenderWindow& bazinga);

	virtual ~Mob();
};*/
#pragma once
class Mob
{
public:
	float x, y, dx, dy, R, angle;
	int life;
	std::string name;
	sf::RectangleShape box;
	//sf::Texture::m_size
	Mob()
	{
		life = 3;
	}
	Mob(int X, int Y, float Angle, int Radius) {
		x = X;
		y = Y;
		angle = Angle;
		R = Radius;
		life = 1;
		box.setFillColor(sf::Color(150, 20, 90));
	}

	Mob(int X, int Y, int Radius) {
		x = X;
		y = Y;
		angle = 0;
		R = Radius;
	}
	/*
	void settings(int X, int Y, float Angle = 0, int radius = 1)
	{
		x = X; y = Y;
		angle = Angle;
		R = radius;
	}*/

	virtual void update(float xx, float yy) {};

	void draw(RenderWindow& bazinga)
	{
		box.setPosition(x, y);
		box.setRotation(angle + 90);
		bazinga.draw(box);
		CircleShape circle(R);
		circle.setFillColor(Color(255, 0, 0, 170));
		circle.setPosition(x, y);
		circle.setOrigin(R, R);
	}

	virtual ~Mob() {};
};