#pragma once
#include <SFML/Graphics.hpp>	//must provide openall libary when using sfml-audio
#include <stdio.h>
#include <iostream>

#include <cmath>
#include <time.h>

#define PI 3.14159265

//void fire(double x, double y, double r, sf::CircleShape ball1);

//instead of using namespace std just add to this list if you want to abreviate a namespace;
using std::cout;
using std::endl;
using std::cin;
using std::string;


//classes
#include "Tank.h" //game class
#include "Sprite.h"
#include "Bullet.h"

#define DEFAULT_WINDOWX 700
#define DEFAULT_WINDOWY 700