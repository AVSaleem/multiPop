#include "externals.h"
//using namespace sf;
//
//const int W = 1920;
//const int H = 1080;
//
//float DEGTORAD = 0.017453f;

/*
class Mob
{
   public:
   float x,y,dx,dy,R,angle;
   bool life;
   std::string name;
   sf::RectangleShape box;
   //sf::Texture::m_size
   Mob()
   {
     life=1;
   }
   Mob(int X, int Y, float Angle, int Radius){
	   x = X;
	   y = Y;
	   angle = Angle;
	   R = Radius;
   }

   Mob(int X, int Y, int Radius){
	   x = X;
	   y = Y;
	   angle = 0;
	   R = Radius;
   }

   void settings(int X,int Y,float Angle=0,int radius=1)
   {
     x=X; y=Y;
     angle = Angle;
     R = radius;
   }

   virtual void update(float xx, float yy){};

   void draw(RenderWindow &bazinga)
   {
       box.setPosition(x,y);
        box.setRotation(angle+90);
	   bazinga.draw(box);
     CircleShape circle(R);
     circle.setFillColor(Color(255,0,0,170));
     circle.setPosition(x,y);
     circle.setOrigin(R,R);
   }

   virtual ~Mob(){};
};*/

/*
class Solo: public Mob
{
   public:
   Solo(int X, int Y, float Angle, int Radius):Mod(X,Y,Angle,Radius)
   {

     dx=rand()%8-4;
     dy=rand()%8-4;
     name="Solo";
     box.setSize(sf::Vector2f(35, 50));
	 box.setOrigin(sf::Vectort2f(17.5, 25));
	 box.setFillColor(sf::Color::White);
   }

   void update(float xx, float yy)
   {
        float hyp = sqrt((x - xx) * (x - xx) + (y - yy) * (y - yy));
        x += (xx - x) / hyp;
        y += (yy - y) / hyp;

     if (x>W) x=0;  if (x<0) x=W;
     if (y>H) y=0;  if (y<0) y=H;
   }

};
*/



bool collision(Mob *a,Mob *b)
{
  return (b->x - a->x)*(b->x - a->x)+
         (b->y - a->y)*(b->y - a->y)<
         (a->R + b->R)*(a->R + b->R);
}


int main()
{
    srand(time(0));

    RenderWindow bazinga(VideoMode(W, H), "Bazinga!");
    bazinga.setFramerateLimit(60);

	Texture t1, t2, t4, t6;
    t1.loadFromFile("images/epic.png");
    t2.loadFromFile("images/gradient.png");
    t4.loadFromFile("images/rock.png");
    t6.loadFromFile("images/rock_small.png");

    Sprite background(t2);

    std::list<Mob*> mobs;

	


    for(int i=0;i<15;i++)
    {
      Solo *a = new Solo(rand() % W, rand() % H, rand() % 360, 25);
	 // a->settings(rand() % W, rand() % H, rand() % 360, 25);
      mobs.push_back(a);
    }

    Steve *p = new Steve();
   // p->settings(200,200,0,20);
    mobs.push_back(p);

    /////main loop/////
    while (bazinga.isOpen())
    {
        Event event;
        while (bazinga.pollEvent(event))
        {
            if (event.type == Event::Closed)
                bazinga.close();
        }	//hell yeah

    if (Keyboard::isKeyPressed(Keyboard::Right)) p->angle+=3;
    if (Keyboard::isKeyPressed(Keyboard::Left))  p->angle-=3;
    if (Keyboard::isKeyPressed(Keyboard::Up)) p->thrust=true;
    else p->thrust=false;


    for(auto a:mobs)
     for(auto b:mobs)
     {
		 if (a->name == "Steve" && b->name == "Solo") {
			 if (collision(a, b))
			 {
				 b->life = false;
				 //p->settings(W/2,H/2,0,20);
				 p->dx = 0; p->dy = 0;
			 }
		 }
     }
	//zoot

    if (rand()%120==0)
     {
       Solo *a = new Solo(0,rand()%H, rand()%360, 25);
       //a->settings(0,rand()%H, rand()%360, 25);
       mobs.push_back(a);
     }
    float x = p->x, y = p->y;

    for(auto i=mobs.begin();i!=mobs.end();)
    {
      Mob *e = *i;

      e->update(x, y);

      if (e->life==false) {i=mobs.erase(i); delete e;}
      else i++;
    }

   //////draw//////
   bazinga.clear();
   bazinga.draw(background);
   for(auto i:mobs) i->draw(bazinga); //for every element of mobs
   bazinga.display();
   }

    return 0;
}
