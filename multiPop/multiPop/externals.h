#pragma once
#define PI 3.14159265

//void fire(double x, double y, double r, sf::CircleShape ball1);


//classes
#define DEFAULT_WINDOWX 900
#define DEFAULT_WINDOWY 900

#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>
#include <list>
using namespace sf;



//instead of using namespace std just add to this list if you want to abreviate a namespace;
using std::cout;
using std::endl;
using std::cin;
using std::string;

const int W = 1920;
const int H = 1080;

float DEGTORAD = 0.017453f;

#include "Mob.h"
#include "Steve.h"
#include "Solo.h"