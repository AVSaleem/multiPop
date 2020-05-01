class Steve: public Mob
{
   public:
   bool thrust;

   Steve() {
         name="Steve";
         box.setSize(sf::Vector2f(60, 80));
         box.setOrigin(sf::Vector2f(30, 40));
	     box.setFillColor(sf::Color::White);
	     x = 200;
	     y = 200;
	     R = 35;
   }

   Steve(int X, int Y, int Radius)//:Mob(X,Y,Radius)
   {
     
   }

   void update(float xx, float yy)
   {
     if (thrust)
      { dx+=cos(angle*DEGTORAD)*0.2;
        dy+=sin(angle*DEGTORAD)*0.2; }
     else
      { dx*=0.99;
        dy*=0.99; }

    int maxSpeed=15;
    float speed = sqrt(dx*dx+dy*dy);
    if (speed>maxSpeed)
     { dx *= maxSpeed/speed;
       dy *= maxSpeed/speed; }

    x+=dx;
    y+=dy;

    if (x>W) x=0; if (x<0) x=W;
    if (y>H) y=0; if (y<0) y=H;
   }

};