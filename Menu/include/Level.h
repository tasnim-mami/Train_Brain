#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std;
#include "../../Carte/include/Carte.h"
#include "../../Carte/include/Level2.h"
#include "../../Carte/include/Level3.h"
#ifndef LEVEL_H
#define LEVEL_H
#define N 3
#include "Theme.h"


class Level
{
    public:
        Level(float width, float height);
        virtual ~Level();

        void draw(sf::RenderWindow &window);
        void moveUp();
        void moveDown();
        void run(int);

        int GetPressedItem()
        {
            return selectedItemIndex;
        }

        int themeselected;

    private:
        int selectedItemIndex;
        sf::Font font;
        sf::Text leveltxt[N];
        sf::Text titre;

        sf::SoundBuffer buffer;
        sf::Sound sound;

        sf::Music music;
};

#endif // LEVEL_H
