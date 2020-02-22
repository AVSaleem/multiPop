
#include <SFML/Graphics.hpp>

int main(void) {

	sf::RenderWindow window(sf::VideoMode(1400, 900), "Game");
	sf::Event event;

	sf::RectangleShape gridLines[2];
	gridLines[0].setFillColor(sf::Color::Black);
	gridLines[0].setSize(sf::Vector2f(1400, 3));

	gridLines[1].setFillColor(sf::Color::Black);
	gridLines[1].setSize(sf::Vector2f(3, 900));

	sf::RectangleShape path[20];
	sf::Texture pathTexture;
	pathTexture.loadFromFile("path.png", sf::IntRect(0, 0, 100, 100));
	for (int i = 0; i < 20; i++) {
		path[i].setTexture(pathTexture);
	}


	while (window.isOpen()) {

		while (window.pollEvent(event)) {

			switch (event.type) {

			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		window.clear(sf::Color(255, 255, 255));

		// grid
		for (int i = 0; i < 14; i++) {
			gridLines[1].setPosition(i * 100, 0);
			window.draw(gridLines[1]);
		}
		for (int j = 0; j < 9; j++) {
			gridLines[0].setPosition(0, j * 100);
			window.draw(gridLines[0]);
		}

		window.display();
	}



	return 0;
}