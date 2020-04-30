#include "externals.h"

int main(void) {

	sf::RenderWindow window(sf::VideoMode(DEFAULT_WINDOWX, DEFAULT_WINDOWY), "multiPop", sf::Style::Close | sf::Style::Resize);// | sf::Style::Fullscreen);
	sf::Event happen;

	sf::RectangleShape player(sf::Vector2f(17.0f, 19.0f));
	player.setFillColor(sf::Color::Black); //make a small black rectangle


	float speed = .25;
	Tank tanky = Tank(100, 100, 'r');
	Tank tanky2 = Tank(1180, 620, 'g');

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
		}


		if (sf::Keyboard::isKeyPressed(sf::Keyboard::J))
		{
			tanky2.rotate(-1);
			//base.rotate(-.125);
			//printf(" %.2lf", base.getRotation());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
		{
			tanky2.rotate(1);
			//base.rotate(.125);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
		{
			tanky2.move(speed, 1);
			//	base.move(speed * ::cos(baseAngle), speed * ::sin(baseAngle));
			//	cannon.setPosition(base.getPosition());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
		{
			tanky2.move(speed, -1);
			//	base.move(speed * ::cos(baseAngle) * -1, speed * ::sin(baseAngle) * -1);
			//	cannon.setPosition(base.getPosition());
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::O))
		{
			tanky2.rotateCannon(1);
			//	cannon.rotate(.125);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
		{
			tanky2.rotateCannon(-1);
			//cannon.rotate(-.125);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
		{

		}

		//-----------------------------------------------------------------------------------------



		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) { //if w is pressed
		//	player.move(0, -1); //move player left by one each frame
		//}
		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
		//	player.move(-1, 0);
		//}
		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
		//	player.move(0, 1);
		//}
		//if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
		//	player.move(1, 0);
		//}

		//if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
		//	sf::Vector2i mousePos = sf::Mouse::getPosition(window); //convert mouse position relative to scrren corner to in-window coordinates
		//	player.setPosition((float)mousePos.x, static_cast<float>(mousePos.y)); //(float)mousePos.x same as static_typecast<float>(mousePos.x)
		//}

		window.clear(sf::Color(255, 255, 255)); //clear screen to white
		//window.draw(player);	//draw rectangle

		window.draw(tanky.getBase());
		//window.draw(ball1);
		window.draw(tanky.getCannon());
		window.draw(tanky2.getBase());
		window.draw(tanky2.getCannon());

		window.display();	//display pulse
	}
}
