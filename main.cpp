#include <SFML/Graphics.hpp>
#include <iostream>

#define FRAME_WIDTH 500
#define FRAME_HEIGHT 500
#define TITLE "Platform Game"
#define VELOCITY 5

sf::RectangleShape* configurePlatform(){
    float width = 150.f,height=40.f;
    sf::RectangleShape*s = new sf::RectangleShape(sf::Vector2f(150.f,30.f));
    std::cout<<"Adddress s: "<<s<<std::endl;
    float leftPos = (FRAME_WIDTH-width)/2;
    float bottomPos = FRAME_HEIGHT - height;
    s->setPosition(leftPos,bottomPos);
    s->setFillColor(sf::Color::Green);
    return s;
};
void platformMoving(sf::Event&e,sf::RectangleShape*r){
     if(e.type == sf::Event::KeyPressed){
        if(e.key.code==sf::Keyboard::A)
            r->move(-VELOCITY,0);
        if(e.key.code==sf::Keyboard::D)
            r->move(VELOCITY,0);
     }
}
int main()
{
    sf::RectangleShape*platform=nullptr;
    std::cout<<"Address: "<<platform<<std::endl;
    sf::RenderWindow window(sf::VideoMode(FRAME_WIDTH, FRAME_HEIGHT), TITLE);
    platform = configurePlatform();
    std::cout<<"Address: "<<platform<<std::endl;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            platformMoving(event,platform);
        }
        window.clear();
        if(platform)
            window.draw(*platform);
        window.display();
    }

    return 0;
}
