#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;
#include "../include/Level.h"
#include "../include/Theme.h"
#include "../../Carte/include/Carte.h"
#include "../../Carte/include/Level2.h"
#include "../../Carte/include/Level3.h"

Level::Level(float width, float height)
{
    if (!font.loadFromFile("font/Debug.otf"))
 {
     cout<<"impossible de charger la police"<<endl;
 }

 //sounds
 if (!buffer.loadFromFile("sound/Click.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 //titre
 titre.setFont(font);
 titre.setColor(sf::Color::Cyan);
 titre.setString("Choisir un niveau");
 titre.setCharacterSize(70);
 titre.setPosition(sf::Vector2f(width/4, 10));

 leveltxt[0].setFont(font);
 leveltxt[0].setColor(sf::Color::Red);
 leveltxt[0].setString("Easy");
 leveltxt[0].setCharacterSize(70);
 leveltxt[0].setPosition(sf::Vector2f(width/3, height/(N+1)));

 leveltxt[1].setFont(font);
 leveltxt[1].setColor(sf::Color::White);
 leveltxt[1].setString("Medium");
 leveltxt[1].setCharacterSize(70);
 leveltxt[1].setPosition(sf::Vector2f(width/3, (height/(N+1))*1.5));

 leveltxt[2].setFont(font);
 leveltxt[2].setColor(sf::Color::White);
 leveltxt[2].setString("Hard");
 leveltxt[2].setCharacterSize(70);
 leveltxt[2].setPosition(sf::Vector2f(width/3, (height/(N+1))*2));


 selectedItemIndex=0;

}

Level::~Level()
{
    //dtor
}

void Level::draw(sf::RenderWindow &window)
{
    window.draw(titre);
    for(int i=0;i<N;i++)
        window.draw(leveltxt[i]);
}

void Level::moveUp()
{
    if ((selectedItemIndex-1)>=0)
    {
        leveltxt[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex --;
        leveltxt[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Level::moveDown()
{
    if ((selectedItemIndex+1)<N)
    {
        leveltxt[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex ++;
        leveltxt[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Level::run(int themeselected)
{
    sf::RenderWindow window(sf::VideoMode(900, 700), "Level");
    Level level (window.getSize().x, window.getSize().y);
    //Background
    sf::RectangleShape background;
    background.setSize(sf::Vector2f(900,700));
    sf::Texture backgroundimage;
    backgroundimage.loadFromFile("image/background1.jpg");
    background.setTexture(&backgroundimage);

    while (window.isOpen())
    {
        sf::Event event1;
        while(window.pollEvent(event1))
        {
            switch(event1.type)
            {
            case sf::Event::Closed:
            {
                window.close();
                break;
            }
            case sf::Event::KeyReleased:
            {
                switch(event1.key.code)
                {
                  case sf::Keyboard::Up:
                            {
				               level.moveUp();
					           break;
                            }
                  case sf::Keyboard::Down:
				            {
				               level.moveDown();
					           break;
				            }
				  case sf::Keyboard::Return:
				      {


				          switch(level.GetPressedItem())
				          {
				              case 0:
				                  {
				                      sound.setBuffer(buffer);
                                      sound.play();
				                      cout<<"Easy"<<endl;
				                      switch(themeselected)
				                      {
                                       case 1:
                                        {
                                            //geo
                                            Carte carte0(1,2);
                                            carte0.run();
                                            break;
                                        }
                                       case 2:
                                        {
                                            //nature
                                            Carte carte0;
                                            carte0.run();
                                            break;
                                        }
                                       case 3:
                                        {
                                            //info
                                            Carte carte0(1);
                                            carte0.run();
                                            break;
                                        }

				                      }
				                      break;
				                  }
                              case 1:
				                  {
				                      sound.setBuffer(buffer);
                                      sound.play();
				                      cout<<"Medium"<<endl;
				                      switch(themeselected)
				                      {
                                       case 1:
                                        {
                                            //geo
                                            Level2 carte0(1,2);
                                            carte0.run();
                                            break;
                                        }
                                       case 2:
                                        {
                                            //nature
                                            Level2 carte0;
                                            carte0.run();
                                            break;
                                        }
                                       case 3:
                                        {
                                            //info
                                            Level2 carte0(1);
                                            carte0.run();
                                            break;
                                        }

				                      }
				                      break;
				                  }
                              case 2:
				                  {
				                      sound.setBuffer(buffer);
                                      sound.play();
				                      cout<<"Hard"<<endl;
				                      switch(themeselected)
				                      {
                                       case 1:
                                        {
                                            //geo
                                            Level3 carte0(1,2);
                                            carte0.run();
                                            break;
                                        }
                                       case 2:
                                        {
                                            //nature
                                            Level3 carte0;
                                            carte0.run();
                                            break;
                                        }
                                       case 3:
                                        {
                                            //info
                                            Level3 carte0(1);
                                            carte0.run();
                                            break;
                                        }

				                      }
				                      break;
				                  }

				          }

				          break;
				      }
                }
                break;
            }

            }
        }
        window.clear();
        window.draw(background);
        level.draw(window);
        window.display();
    }

}

