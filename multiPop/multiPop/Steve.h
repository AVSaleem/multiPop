/*
NAMES:	Edwin Ramirez, Caden Silberlicht, Adam Szymanski, 
		Amy Nguyen
PROJECT:PA9
GAME:	"Bazinga!" is a game that puts you on ince, and
		you must avoid the "solos" on ice by moving around.
		You have three lives.
DATE:	May 1st 2020
*/
#pragma once
#include "externals.h"
class Steve : public Mob
{
public:
	bool thrust;

	Steve();

	Steve(int X, int Y, int Radius);

	void update(float xx, float yy, bool isDie);
};