//added #include "gameData.h" in externals.h

class Game {
private:
	//in game sprites-----------------------------------------------------------------------------------------------------
		//sprite class will probalby be pure base where only derived versions of it can be created (players/mobs/blocks)
	//Sprite* sprites;	//array of all the sprites which each contain their own data (location, health, heading direction) 
	//int numSprites;

	Block* platforms;	//array of all platforms
	int numPlatforms;

	Player pMan;		//player

	Mob* mobs;			//array of all mobs
	int numMobs;

	//-------------------------------------------------------------------------------------------------------------------

public:
	Game();
	~Game();

	void display();
};








//each of these will have its own class.h and class.cpp where it is stored
class Sprite {}; //wip

class Block : public Sprite {
private:
	int mobType;
public:

}; //wip

class Player : public Sprite {
private:
	int lives;
public:

}; //wip

class Mob : public Sprite {
private:
	int mobType;
public:
	Mob();
	~Mob();

	int type() {
		return mobType; //used in other functions to determine correct non-generic action (only pinkman can explode)
	}
}; //wip

class PinkMan : public Mob {}; //wip	//type 1 mob
//--------------------------------------------------------------------------


