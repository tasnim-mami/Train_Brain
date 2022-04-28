#ifndef CARTE_H
#define CARTE_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
using namespace std ;
using namespace sf ;

class Carte
{
    public:
        Carte();

          Carte(int);
          Carte(int,int);
          void carteselectionne(int ,int) ;
          bool gagner();
          void window_win();

         int selected(int,int) ;
         int start(sf::Clock);
         bool test() ;
         void run();



        virtual ~Carte();


    private:
        int deb ;
        Clock tme ;
        int carteinitiale[12];
        int carteselect[2];
        sf::Texture texture[15];
        sf::Sprite sprite[12] ;
        sf::RectangleShape rect[12];
        int tabj[12];
        int tabt[12];

        sf::Music musique;

        sf::SoundBuffer buffer1;
        sf::SoundBuffer buffer2;
        sf::SoundBuffer buffer3;
        sf::SoundBuffer buffer4;
        sf::Sound sound;


};

#endif
