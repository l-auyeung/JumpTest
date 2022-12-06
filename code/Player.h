#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Player
{
private:
    Vector2f m_Position;
    Sprite m_Sprite;
    Texture m_Texture;
    float dy;


public:
    Player();
    FloatRect getPosition();
    Vector2f getCenter();
    Sprite getSprite();
    void moveLeft();
    void moveRight();
    void update(Time dt);
    float getDy();
    void setPosition(float x, float y);


};
