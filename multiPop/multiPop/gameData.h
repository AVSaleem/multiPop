#pragma once
typedef struct Player {
	int points;

}player;
typedef struct Terrain {
	short** landType;
	short** standingOn;

}terrain;


typedef struct MultiPopGameData {
	struct player* player;

	char board;
} gameData;
