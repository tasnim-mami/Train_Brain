#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;
#include "../../Carte/include/Carte.h"
#include "../../Carte/include/Level2.h"
#include "../../Carte/include/Level3.h"
#ifndef THEME_H
#define THEME_H
#define N 3


class Theme
{

    public:
        Theme(float width, float height);
        virtual ~Theme();

        void draw(sf::RenderWindow &window);
        void moveUp();
        void moveDown();
        void run(int);

        int GetPressedItem()
        {
            return selectedItemIndex;
        }

        //int themeselected=0;


    private:
        int selectedItemIndex;
        sf::Font font;
        sf::Text menu[N];
        sf::Text titre;

        sf::SoundBuffer buffer;
        sf::Sound sound;
        sf::Music music;


};

#endif // THEME_H
