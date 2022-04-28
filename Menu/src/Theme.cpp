#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;
#include "../../Carte/include/Carte.h"
#include "../../Carte/include/Level2.h"
#include "../../Carte/include/Level3.h"
#include "../include/Theme.h"
#include "../include/Level.h"
#define N 3

Theme::Theme(float width, float height)
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
 titre.setString("Choisir un theme");
 titre.setCharacterSize(70);
 titre.setPosition(sf::Vector2f(width/4, 10));

    menu[0].setFont(font);
    menu[0].setColor(sf::Color::Red);
    menu[0].setString("Géographie");
    menu[0].setCharacterSize(70);
    menu[0].setPosition(sf::Vector2f(width/3, height/(N+1)));

    menu[1].setFont(font);
    menu[1].setColor(sf::Color::White);
    menu[1].setString("Nature");
    menu[1].setCharacterSize(70);
    menu[1].setPosition(sf::Vector2f(width/3, (height/(N+1))*1.5));

    menu[2].setFont(font);
    menu[2].setColor(sf::Color::White);
    menu[2].setString("Informatique");
    menu[2].setCharacterSize(70);
    menu[2].setPosition(sf::Vector2f(width/3, (height/(N+1))*2));

    selectedItemIndex=0;

}

Theme::~Theme()
{
    //dtor
}

void Theme::draw(sf::RenderWindow &window)
{
     window.draw(titre);
    for(int i=0; i<N; i++)
        window.draw(menu[i]);
}

void Theme::moveUp()
{
    if ((selectedItemIndex-1)>=0)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex --;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Theme::moveDown()
{
    if ((selectedItemIndex+1)<N)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex ++;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Theme::run(int themeselected)
{
    sf::RenderWindow theme(sf::VideoMode(900, 700), "Theme");
    Theme themetxt(theme.getSize().x, theme.getSize().y);
    //Background
    sf::RectangleShape background;
    background.setSize(sf::Vector2f(900,700));
    sf::Texture backgroundimage;
    backgroundimage.loadFromFile("image/background1.jpg");
    background.setTexture(&backgroundimage);

    while (theme.isOpen())
    {
        sf::Event event1;
        while(theme.pollEvent(event1))
        {
            switch(event1.type)
            {
            case sf::Event::Closed:
            {
                theme.close();
                break;
            }
            case sf::Event::KeyReleased:
            {
                switch(event1.key.code)
                {
                  case sf::Keyboard::Up:
                            {
				               themetxt.moveUp();
					           break;
                            }
                  case sf::Keyboard::Down:
				            {
				               themetxt.moveDown();
					           break;
				            }
				  case sf::Keyboard::Return:
				      {
				          switch(themetxt.GetPressedItem())
				          {
				              case 0:
				                  {
				                      themeselected=1;
				                      sound.setBuffer(buffer);
                                      sound.play();
				                      cout<<"Géographie"<<endl;
				                      theme.close();
				                      Level level(900,700);
				                      level.run(themeselected);
				                      break;
				                  }
                                case 1:
				                  {
				                      themeselected=2;
				                      sound.setBuffer(buffer);
                                      sound.play();
				                      cout<<"Nature"<<endl;
				                      theme.close();
				                      Level level(900,700);
				                      level.run(themeselected);
				                      break;
				                  }
                                case 2:
				                  {
				                      themeselected=3;
				                      sound.setBuffer(buffer);
                                      sound.play();
				                      cout<<"Informatique"<<endl;
				                      theme.close();
				                      Level level(900,700);
				                      level.run(themeselected);
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
        theme.clear();
        theme.draw(background);
        themetxt.draw(theme);
        theme.display();
    }

}
