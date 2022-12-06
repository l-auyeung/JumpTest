#include "Player.h"

Player::Player()
{
    m_Position.x = 250;
    m_Position.y = 500;
    m_Texture.loadFromFile("bunny.jpeg");
    Sprite m_Sprite(m_Texture);
    m_Sprite.setScale(0.1,0.1);
    
}

FloatRect Player::getPosition()
{
    return m_Sprite.getGlobalBounds();
}
Vector2f Player::getCenter()
{
    return m_Position;
}
Sprite getSprite();
    void moveLeft();
    void moveRight();
    void update(Time dt);
    float getDy();
    void setPosition(float x, float y);
