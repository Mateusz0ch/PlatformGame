#include <SFML/Graphics.hpp>
#include <iostream>

#define FRAME_WIDTH 500
#define FRAME_HEIGHT 500
#define TITLE "Platform Game"

int main()
{
    sf::RenderWindow window(sf::VideoMode(FRAME_WIDTH, FRAME_HEIGHT), TITLE);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}
