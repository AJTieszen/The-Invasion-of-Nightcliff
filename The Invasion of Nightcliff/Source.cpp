#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Test");

int main()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
	}
}