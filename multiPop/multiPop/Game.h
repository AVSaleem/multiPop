//added #include "gameData.h" in externals.h


//each of these will have its own class.h and class.cpp where it is stored
class Sprite {}; //wip

class Block : public Sprite {
private:
	//int mobType;
public:
	Block() {}
	~Block() {}

}; //wip

class Player : public Sprite {
private:
	//int lives;
public:
	Player() {}
	~Player() {}

}; //wip

class Mob : public Sprite {
private:
	//int mobType;
public:
	Mob() {}
	~Mob() {
		cout << "Mob deleted!" << endl;
	}

	//int type() {
	//	return mobType; //used in other functions to determine correct non-generic action (only pinkman can explode)
	//}
}; //wip

class PinkMan : public Mob {}; //wip	//type 1 mob
//--------------------------------------------------------------------------


//ACTUAL CLASS IS HERE\/


class Game {
private:
	//in game sprites-----------------------------------------------------------------------------------------------------
		//sprite class will probalby be pure base where only derived versions of it can be created (players/mobs/blocks)
	//Sprite* sprites;	//array of all the sprites which each contain their own data (location, health, heading direction) 
	//int numSprites;

	int numPlatforms;
	Block* platform;	//array of all platforms

	int numPlayers;
	Player* pMan;		//player

	int numMobs;
	Mob* mobMan;			//array of all mobs

	//-------------------------------------------------------------------------------------------------------------------

public:
	Game();
	~Game();

	void display();
};









