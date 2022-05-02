#ifndef LEVEL2_H
#define LEVEL2_H
#include <SFML/Graphics.hpp>
using namespace sf ;
class Level2
{
    public:
        Level2();
          Level2(int);
           Level2(int,int);
        void carteselectionne(int ,int) ;
        bool gagner();
        bool timeout();
         int selected(int,int) ;
         int start(sf::Clock);
         bool test() ;
         void run();


        virtual ~Level2();
 int deb ;
        Clock tme ;
        int carteinitiale[12];
        int carteselect[2];
         sf::Texture texture[15];
         sf::Sprite sprite[12] ;
          sf::RectangleShape rect[12];
        int tabj[12];
        int tabt[12];

    private:
};

#endif // LEVEL2_H
