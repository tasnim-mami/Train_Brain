#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;
#include "../../Carte/include/Carte.h"
#include "../../Carte/include/Level2.h"
#include "../../Carte/include/Level3.h"
#include "../include/Menu.h"
#include "../include/Theme.h"
#include "../include/Level.h"
#define N 2

Menu::Menu(float width, float height)
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

 //backgroundmusic
 if (!music.openFromFile("sound/backgroundmusic.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }

 //Background
	background.setSize(sf::Vector2f(900,700));
	backgroundimage.loadFromFile("image/background1.jpg");
	background.setTexture(&backgroundimage);

//titre
 titre.setFont(font);
 titre.setColor(sf::Color::Cyan);
 titre.setString("TRAIN BRAIN");
 titre.setCharacterSize(100);
 titre.setPosition(sf::Vector2f(width/4, 10));

 //logo
 //logo.loadFromFile("logo/brain.png", sf::IntRect(10,10,150,90));
 sprite.setTexture(logo);
 sprite.setPosition(sf::Vector2f(10,10));

 menu[0].setFont(font);
 menu[0].setColor(sf::Color::Red);
 menu[0].setString("Jouez");
 menu[0].setCharacterSize(80);
 menu[0].setPosition(sf::Vector2f(width/2.5, height/(N+1)));

 menu[1].setFont(font);
 menu[1].setColor(sf::Color::White);
 menu[1].setString("Exit");
 menu[1].setCharacterSize(80);
 menu[1].setPosition(sf::Vector2f(width/2.5, (height/(N+1))*1.75));

 selectedItemIndex=0;
 cout<<"constructeur"<<endl;

}

Menu::~Menu()
{
    //dtor
}

void Menu::draw(sf::RenderWindow &window)
{
    window.draw(titre);
    for(int i=0;i<N;i++)
        window.draw(menu[i]);

}

void Menu::moveUp()
{
    if ((selectedItemIndex-1)>=0)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex --;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Menu::moveDown()
{
    if ((selectedItemIndex+1)<N)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex ++;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Menu::run()
{

    sf::RenderWindow window(sf::VideoMode(900, 700), "Menu");
	Menu menu(window.getSize().x, window.getSize().y);
	music.play();

	while (window.isOpen())
    {

        sf::Event event;

		while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::KeyReleased:
                    {
                        switch(event.key.code)
                        {
                            case sf::Keyboard::Up:
                            {
				               menu.moveUp();
					           break;
                            }
                            case sf::Keyboard::Down:
				            {
				               menu.moveDown();
					           break;
				            }
				            case sf::Keyboard::Return:
				                {
                                    //sf::RenderWindow theme(sf::VideoMode(900,700),"Theme");
				                    switch(menu.GetPressedItem())
				                    {
				                        case 0:
					                     {
                                           sound.setBuffer(buffer);
                                           sound.play();
					                       cout << "Play button has been pressed" <<endl;
					                       window.close();
					                       Theme thematique(900,700);
					                       thematique.run(themeselected);

					                     /*  while (theme.isOpen())
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
                                                                    case sf::Keyboard::Enter:
                                                                    {
                                                                        theme.close();
                                                                        break;
                                                                    }
                                                                }
                                                                break;
                                                            }

                                                   }
                                               }
                                               theme.clear();
                                               theme.display();
                                           }*/
						                   break;
					                     }
                                        case 1:
					                     {
                                            sound.setBuffer(buffer);
                                            sound.play();
					                        cout<<"exit"<<endl;
					                        window.close();
						                     break;
                                         }
				                    }
				                    break;
				                }

                        }

                        break;
                    }
                case sf::Event::Closed:
			       {
			        window.close();
				     break;
			       }

            }
        }
             window.clear();
             window.draw(background);
             window.draw(sprite);
		     menu.draw(window);
		     window.display();

    }
}
