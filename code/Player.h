#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Player
{
private:
    Vector2f m_Position;
    Sprite m_Sprite;
    //texture soon
    Texture m_Texture;
    bool m_LeftPressed;
    bool m_RightPressed;
    float m_Speed;

public:
    Player(float startX, float startY);
    FloatRect getPosition();
    Vector2f getCenter();
    Sprite getSprite();
    void moveLeft();
    void moveRight();
    void stopLeft();
    void stopRight();
    void getVelocity();
    void bouncePlat();
    void update(Time dt);


};
