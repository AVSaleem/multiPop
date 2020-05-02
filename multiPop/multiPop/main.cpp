#include "externals.h"

/*
NAMES:	Edwin Ramirez, Caden Silberlicht, Adam Szymanski, 
		Amy Nguyen
PROJECT:PA9
GAME:	"Bazinga!" is a game that puts you on ince, and
		you must avoid the "solos" on ice by moving around.
		You have three lives.
DATE:	May 1st 2020


CONTROLS:
	Right Arrow Key: TURN RIGHT
	Left Arrow Key:  TURN LEFT
	Up Arrow Key:    THRUST FORWARD
*/



int main()
{
	srand(time(0)); //seed randomnumbergenerator

	//W and H represent width and height of the window
	RenderWindow bazinga(VideoMode(W, H), "Bazinga!");
	Event happen;

	bazinga.setFramerateLimit(60);
	Texture t1;
	t1.loadFromFile("images/gradient.jpg");  //BACKGROUND
	Sprite background(t1);

	std::list<Mob*> mobs; //list of mobs for drawing and storing. 

	Steve *p = new Steve();		//create player variable

	for (int i = 0; i < 30; i++)		// spawn enemies in random locations
	{	
		Solo* a = new Solo(rand() % W, rand() % H, rand() % 360, 25); 
		mobs.push_back(a);
	}
	mobs.push_back(p);
	

	int lives = 3;		// player starts with 3 lives
	Heart* life1 = new Heart(0, 0);
	Heart* life2 = new Heart(50, 0);
	Heart* life3 = new Heart(100, 0);
	
	bool isDie;

	/////main loop/////
	while (bazinga.isOpen()) 
	{
		isDie = false;
		while (bazinga.pollEvent(happen))
		{
			if (happen.type == Event::Closed)
				bazinga.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Right)) //rotates player
			p->angle += 3;
		if (Keyboard::isKeyPressed(Keyboard::Left)) // rotates player
			p->angle -= 3;

		if (Keyboard::isKeyPressed(Keyboard::Up)) //enables thrust forward
			p->thrust = true;
		else
			p->thrust = false;

		for (auto a : mobs) //auto automatically loops from a to mobs
		{
			for (auto b : mobs)
			{
				if (a->name == "Steve" && b->name == "Solo") //to ensure the entities touching are not two Solos
				{
					if (collision(a, b)) //detects collision
					{
						p->life--;
						lives--;
						isDie = true;
						if(p->life == 0)
						{

							bazinga.close(); //to close game after 3 lives lost


						}
						else //resets position and stops thrust after life is lost
						{
							p->x = W / 2;
							p->y = H / 2;
							p->angle = 0;
							p->dx = 0; 
							p->dy = 0;
						}
					}
				}
			}
		}
	

		if (rand() % 120 == 0) //random intervals to spawn new enemies
		{
			Solo* a = new Solo(0, rand() % H, rand() % 360, 25);
			mobs.push_back(a); //added to mob list
		}

		float x = p->x, y = p->y;
		for (auto i = mobs.begin(); i != mobs.end();) //updates all mobs in list
		{
			Mob* e = *i; // creats a pointer to a mob at i;
			e->update(x, y, isDie);
			if (e->life == false) //
			{
				i = mobs.erase(i);
				delete e;
				--lives;

				//for (auto i : mobs)
				//	i->deathSwitch(); //for every element of mobs
			} 
			else
				i++;
		}

		//////draw//////
		bazinga.clear();
		bazinga.draw(background);
		for (auto i : mobs)
			i->draw(bazinga); //for every element of mobs
		
		//draw amount of lives the player has left 
		if (lives == 3) {
			life1->draw(bazinga);
			life2->draw(bazinga);
			life3->draw(bazinga);
		}
		else if (lives == 2) {
			life1->draw(bazinga);
			life2->draw(bazinga);
		}
		else if (lives == 1) {
			life1->draw(bazinga);
		}
		bazinga.display();
	}
	return 0;
}
