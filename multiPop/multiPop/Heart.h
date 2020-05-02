/*
NAMES:	Edwin Ramirez, Caden Silberlicht, Adam Szymanski, 
		Amy Nguyen
PROJECT:PA9
GAME:	"Bazinga!" is a game that puts you on ince, and
		you must avoid the "solos" on ice by moving around.
		You have three lives.
DATE:	May 1st 2020
*/
class Heart {//: public Mob { //Heart class displays lives the character still has
private:
	CircleShape circle;
public:
	Heart(int x, int y);
	~Heart();

	void draw(RenderWindow& bazinga);
};