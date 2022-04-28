#ifndef LEVEL3_H
#define LEVEL3_H
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std ;
using namespace sf ;

class Level3
{
    public:
        Level3();

          Level3(int);
           Level3(int,int);
        void carteselectionne(int ,int) ;
        bool gagner();

         int selected(int,int) ;
         int start(sf::Clock);
         bool test() ;
         void run();
          virtual ~Level3();

    private:
        int deb ;
        Clock tme ;
        int carteinitiale[16];
        int carteselect[2];
         sf::Texture texture[15];
         sf::Sprite sprite[16] ;
          sf::RectangleShape rect[16];
        int tabj[16];
        int tabt[16];



};

#endif // LEVEL3_H

