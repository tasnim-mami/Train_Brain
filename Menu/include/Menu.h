#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "../../Carte/include/Carte.h"
#include "../../Carte/include/Level2.h"
#include "../../Carte/include/Level3.h"
using namespace std;
#ifndef MENU_H
#define MENU_H
#define N 2


class Menu
{
    //friend class Theme;
    public:
        Menu(float width, float height);
        virtual ~Menu();

        void draw(sf::RenderWindow &window);
        void moveUp();
        void moveDown();
        void run();

        int GetPressedItem()
        {
            return selectedItemIndex;
        }

    private:
        int selectedItemIndex;
        sf::Font font;
        sf::Text menu[N];
        sf::RectangleShape background;
        sf::Texture backgroundimage;
        sf::Text titre;
        sf::Sprite sprite;
        sf::Texture logo;
        //sounds
        sf::SoundBuffer buffer;
        sf::Sound sound;
        sf::Music music;

       int themeselected=0;
};

#endif // MENU_H
