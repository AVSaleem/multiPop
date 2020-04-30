#include "externals.h"

int main(void) {

	sf::RenderWindow window(sf::VideoMode(DEFAULT_WINDOWX, DEFAULT_WINDOWY), "multiPop", sf::Style::Close | sf::Style::Resize);// | sf::Style::Fullscreen);
	sf::Event happen;

	sf::RectangleShape player(sf::Vector2f(17.0f, 19.0f));
	player.setFillColor(sf::Color::Black); //make a small black rectangle


	float speed = .25;
	Tank tanky = Tank(100, 100, 'r');
	Tank tanky2 = Tank(1180, 620, 'g');

	Sprite* tSprite = new Sprite(sf::Color::Magenta, 0, 0);

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
			}
		}
		//------------------------------------------------------------------TANK
		tanky.setBaseAngle();
		tanky.setCannonAngle();
		tanky2.setBaseAngle();
		tanky2.setCannonAngle();
		//-----------------------------------------------------------------------MOVE
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			tanky.rotate(-1);
			//base.rotate(-.125);
			//printf(" %.2lf", base.getRotation());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			tanky.rotate(1);
			//base.rotate(.125);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			tanky.move(speed, 1);
			//	base.move(speed * ::cos(baseAngle), speed * ::sin(baseAngle));
			//	cannon.setPosition(base.getPosition());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			tanky.move(speed, -1);
			//	base.move(speed * ::cos(baseAngle) * -1, speed * ::sin(baseAngle) * -1);
			//	cannon.setPosition(base.getPosition());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
		{
			tanky.rotateCannon(1);
			//	cannon.rotate(.125);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		{
			tanky.rotateCannon(-1);
			//cannon.rotate(-.125);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::F))
		{
			//fire(tanky.getBase().getPosition().x, tanky.getBase().getPosition().y, (tanky.getCannon().getRotation() * PI / 180) + PI / 2, ball1);
			//tanky.fire();
		}


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
		{
			tSprite->moveSprite(-1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
		{
			tSprite->moveSprite(1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
		{
			tSprite->moveSprite(0, -1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
		{
			tSprite->moveSprite(0, 1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
		{
			tSprite->setScale(1.01, 1.01);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
		{
			tSprite->setScale(0.99, 0.99);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
		{

		}

		//-----------------------------------------------------------------------------------------
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			sf::Vector2i mousePos = sf::Mouse::getPosition(window); //convert mouse position relative to scrren corner to in-window coordinates
			(tSprite->getBody()).setPosition((float)mousePos.x, static_cast<float>(mousePos.y)); //(float)mousePos.x same as static_typecast<float>(mousePos.x)
		}

		window.clear(sf::Color(255, 255, 255)); //clear screen to white
		//window.draw(player);	//draw rectangle

		// draw tank
		window.draw(tanky.getBase());
		//window.draw(ball1);
		window.draw(tanky.getCannon());
		window.draw(tanky2.getBase());
		window.draw(tanky2.getCannon());


		tSprite->Draw(window);

		window.display();	//display pulse
	}
}
