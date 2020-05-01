/*#include "externals.h"

//bool collision(Sprite *a,Sprite *b)
//{
//  return (b->getX() - a->getX())*(b->getX() - a->getX()) + (b->getY() - a->getY())*(b->getY() - a->getY()) < (a->getR() + b->getR())*(a->getR() + b->getR());
//}


int main(void) {

	sf::RenderWindow window(sf::VideoMode(DEFAULT_WINDOWX, DEFAULT_WINDOWY), "multiPop", sf::Style::Close | sf::Style::Resize);// | sf::Style::Fullscreen);
	sf::Event happen;

	sf::RectangleShape player(sf::Vector2f(17.0f, 19.0f));
	player.setFillColor(sf::Color::Black); //make a small black rectangle

	Bullet* shot = nullptr;

	float speed = .25;
	Tank *tanky = new Tank(100, 100, 'r');
	//sprites.push_back(tanky);
	//Tank tanky2 = Tank(1180, 620, 'g');
	std::list<Sprite*> sprites;
	for(int i = 0; i < 3; i++)
	{

		//Steve *s = new Steve(sf::Color::Blue, 300, 300);
		//sprites.push_back(s);
	}
	//Sprite* tSprite = new Sprite(sf::Color::Magenta, 0, 0);

	while (window.isOpen()) { //window runs within here

		while (window.pollEvent(happen)) { //something is pressed

			switch (happen.type) {//some event happened

			case sf::Event::Closed: //close with x
				window.close();
				break;
			case sf::Event::Resized:
				std::cout << "Resize to:   Width=" << happen.size.width << " Height=" << happen.size.height << endl;
				break;
			case sf::Event::TextEntered: //types text in console from keyboard
				if (happen.text.unicode < 128) {
					cout << (char)happen.text.unicode;
				}
				break;
			case sf::Event::KeyPressed:
				if(happen.key.code == sf::Keyboard::F)
				{
				
				}

			}
		}
		//------------------------------------------------------------------TANK
		tanky->setBaseAngle();
		tanky->setCannonAngle();
		
		//-----------------------------------------------------------------------MOVE
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
			tanky->rotate(-1);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
			tanky->rotate(1);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
			tanky->move(speed, 1);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			tanky->move(speed, -1);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
			tanky->rotateCannon(1);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
			tanky->rotateCannon(-1);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
		{
			//fire(tanky.getBase().getPosition().x, tanky.getBase().getPosition().y, (tanky.getCannon().getRotation() * PI / 180) + PI / 2, ball1);
			//tanky.fire();
		}
		//-----------------------------------------------------------------------------------------
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			sf::Vector2i mousePos = sf::Mouse::getPosition(window); //convert mouse position relative to scrren corner to in-window coordinates
			//(tSprite->getBody()).setPosition((float)mousePos.x, static_cast<float>(mousePos.y)); //(float)mousePos.x same as static_typecast<float>(mousePos.x)
			//shot = tanky->fire();
		}
		
		window.clear(sf::Color(255, 255, 255)); //clear screen to white


		// draw tank
		window.draw(tanky->getBase());
		
		window.draw(tanky->getCannon());

		//tSprite->Draw(window);

		window.display();	//display pulse
	}
}
*/