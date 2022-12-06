#include<SFML/Graphics.hpp>
#include<ctime>
#include<vector>
#include "Player.h"
#include <sstream>
using namespace sf;
using namespace std;

//define things here

int main()
{
    RenderWindow window(VideoMode(1000, 500),"Jump!", Style::Default);
    Texture tBackground, tCharacter, tPlatform;
    //tBackground.loadFromFile();
    tCharacter.loadFromFile("bunny.jpeg");
    //tPlatform.loadFromFile();
   //Sprite sBackground(tBackground), sCharacter(tCharacter), sPlatform(tPlatform);
    Sprite sCharacter(tCharacter);
    sCharacter.setScale(.1,.1);


    
    while 


    return 0;
}