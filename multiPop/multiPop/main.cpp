#include "gamedata.h"

int main(void) {
	gameData game;
	setDefaults(&game);

	display(&game);


	//releaseMemory(&game);
}

void setDefaults(gameData* game) {
	game->sett.aspectX = 1400;
	game->sett.aspectY = 900;

	/*game->sett.windowName = assign("multiPop");
		
		= (char*)malloc(sizeof(char));*/
}

//void releaseMemory(gameData* game) {
//
//}