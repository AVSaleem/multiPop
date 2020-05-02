#include "externals.h"
/*
NAMES:	Edwin Ramirez, Caden Silberlicht, Adam Szymanski, 
		Amy Nguyen
PROJECT:PA9
GAME:	"Bazinga!" is a game that puts you on ince, and
		you must avoid the "solos" on ice by moving around.
		You have three lives.
DATE:	May 1st 2020
*/
Solo::Solo()
{
	life = 1;
}


void Solo::update(float xx, float yy, bool isDie)
{
	float hyp = sqrt((x - xx) * (x - xx) + (y - yy) * (y - yy));
	x += (xx - x) / hyp;
	y += (yy - y) / hyp;
	if (isDie) //respawns enemies randomly ofscreen when player dies
	{
		double randx = W / 2;
		double randy = H / 2;
		while (abs(randx) <= W && abs(randy) <= H)
		{
			randx = rand() % (W + 20);
			if (rand() % 2 == 1)
			{
				randx *= -1;
			}
			randy = rand() % (H + 20);
			if (rand() % 2 == 1)
			{
				randy *= -1;
			}
		}
		x = randx;
		y = randy;
	}
}