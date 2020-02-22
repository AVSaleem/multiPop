#pragma once
struct Player {
	int points;
	int health;
	int money;
}player;


struct MultiPopGameData {
	struct player* player;

	char board;
} gameData;


