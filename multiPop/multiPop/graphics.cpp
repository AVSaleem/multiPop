#include "gameData.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int display(gameData* game) {

	sf::RenderWindow window(sf::VideoMode(game->sett.aspectX, game->sett.aspectY), "multiPop", sf::Style::Close | sf::Style::Resize);// | sf::Style::Fullscreen);
	sf::Event happen;

	sf::RectangleShape player(sf::Vector2f(17.0f, 19.0f));
	player.setFillColor(sf::Color::Black); //make a small black rectangle

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

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) { //if w is pressed
			player.move(0, -1); //move player left by one each frame
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
			player.move(-1, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
			player.move(0, 1);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
			player.move(1, 0);
		}

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			sf::Vector2i mousePos = sf::Mouse::getPosition(window); //convert mouse position relative to scrren corner to in-window coordinates
			player.setPosition((float)mousePos.x, static_cast<float>(mousePos.y)); //(float)mousePos.x same as static_typecast<float>(mousePos.x)
		}



		window.clear(sf::Color(255, 255, 255)); //clear screen to white
		window.draw(player);	//draw rectangle
		window.display();	//display pulse

	}
	return 0;
}
