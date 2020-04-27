#pragma once
#include <SFML/Graphics.hpp>
#include <stdio.h>

//must provide openall libary when using sfml-audio
typedef struct Settings {
	short aspectX;
	short aspectY;
	char windowName[];
}settings;

typedef struct Player {
	int points;
	int health;
	int money;
}player;

typedef struct Terrain {
	short** landType;
	short** standingOn;

}terrain;

typedef struct MultiPopGameData {
	player* player;
	terrain land;


	settings sett;
} gameData;


//#include <SFML/Graphics.hpp>

int display(gameData* game);
void setDefaults(gameData* game);