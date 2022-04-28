#include "../include/Level3.h"
#include "../../Quiz/include/Question.h"

#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>
using namespace std ;
using namespace sf ;

Level3::Level3()
{

for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<16;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<16;i++)
        carteinitiale[i]=-1 ;



           if(!texture[0].loadFromFile("image1t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2t2l3.png",sf::IntRect(50,50,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;



        if(!texture[6].loadFromFile("image7t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[8].loadFromFile("image9t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;


            if(!texture[7].loadFromFile("image8t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[9].loadFromFile("image10t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;


       if(!texture[10].loadFromFile("image11t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[11].loadFromFile("image12t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[12].loadFromFile("image13t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[13].loadFromFile("image14t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[14].loadFromFile("image15t2l3.png",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;




    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }
int j=0 ;
int  x ;
int i=0 ,z=0;

       while(i<15 && z<7)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%16;
        if(tabj[i]!=-1)
            i++ ;
        if(tabj[j]==-1 && tabt[x]==-1 && j>i )

               {tabt[x]=0;
               tabj[j]=0;
               tabj[i]=0;

               cout << "i est egale a "<<i<< "  la valeur de j est  "<<j<< "  la valeur de x est  "<<x <<endl;
                sprite[i].setTexture(texture[x]);
                sprite[j].setTexture(texture[x]);
                i++ ;
                z++ ;
               }
        }

        for(int q=0;q<15 ;q++)
             if(tabt[q]==-1)
                    for(int k=0;k<16 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }


for(int i=0 ;i<16;i++)
{
   rect[i].setSize(sf::Vector2f(150,150));
   rect[i].setFillColor(Color::Green);

     switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(175,0);
        sprite[1].setPosition(175,0);
        break ;

        case 2:
        rect[2].setPosition(350,0);
        sprite[2].setPosition(350,0);
        break ;

          case 3:
        rect[3].setPosition(525,0);
        sprite[3].setPosition(528,0);
        break ;

         case 4:
        rect[4].setPosition(0,175);
        sprite[4].setPosition(0,175);
        break ;
           case 5:
        rect[5].setPosition(175,175);
        sprite[5].setPosition(175,175);
        break ;
            case 6:
        rect[6].setPosition(350,175);
        sprite[6].setPosition(350,175);
        break ;
             case 7:
        rect[7].setPosition(525,175);
        sprite[7].setPosition(525,175);
        break ;
              case 8:
        rect[8].setPosition(0,350);
        sprite[8].setPosition(0,350);
        break ;
             case 9:
        rect[9].setPosition(175,350);
        sprite[9].setPosition(175,350);
        break ;
               case 10:
        rect[10].setPosition(350,350);
        sprite[10].setPosition(350,350);
        break ;
              case 11:
        rect[11].setPosition(525,350);
        sprite[11].setPosition(525,350);
        break ;


        case 12:
        rect[12].setPosition(0,525);
        sprite[12].setPosition(0,525);
        break ;
             case 13:
        rect[13].setPosition(175,525);
        sprite[13].setPosition(175,525);
        break ;
               case 14:
        rect[14].setPosition(350,525);
        sprite[14].setPosition(350,525);
        break ;
              case 15:
        rect[15].setPosition(525,525);
        sprite[15].setPosition(525,525);
        break ;


   }


}


}
//////////theme informatique
Level3::Level3(int c)
{

for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<16;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<16;i++)
        carteinitiale[i]=-1 ;



  if(!texture[0].loadFromFile("image1t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[6].loadFromFile("image7t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[7].loadFromFile("image8t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[8].loadFromFile("image9t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;


        if(!texture[9].loadFromFile("image10t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[10].loadFromFile("image11t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[11].loadFromFile("image12t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;


      if(!texture[12].loadFromFile("image13t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[13].loadFromFile("image14t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[14].loadFromFile("image15t3l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;



    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }

int j=0 ;
int x ;
int i=0 ,z=0;

      while(i<16 && z<7)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%16;
        if(tabj[i]!=-1)
            i++ ;
        if(tabj[j]==-1 && tabt[x]==-1 && j>i )

               {tabt[x]=0;
               tabj[j]=0;
               tabj[i]=0;

               cout << "i est egale a "<<i<< "  la valeur de j est  "<<j<< "  la valeur de x est  "<<x <<endl;
                sprite[i].setTexture(texture[x]);
                sprite[j].setTexture(texture[x]);
                i++ ;
                z++ ;
               }
        }

        for(int q=0;q<15 ;q++)
             if(tabt[q]==-1)
                    for(int k=0;k<16 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }


for(int i=0 ;i<16;i++)
{
   rect[i].setSize(sf::Vector2f(150,150));
   rect[i].setFillColor(Color::Green);

     switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(175,0);
        sprite[1].setPosition(175,0);
        break ;

        case 2:
        rect[2].setPosition(350,0);
        sprite[2].setPosition(350,0);
        break ;

          case 3:
        rect[3].setPosition(525,0);
        sprite[3].setPosition(528,0);
        break ;

         case 4:
        rect[4].setPosition(0,175);
        sprite[4].setPosition(0,175);
        break ;
           case 5:
        rect[5].setPosition(175,175);
        sprite[5].setPosition(175,175);
        break ;
            case 6:
        rect[6].setPosition(350,175);
        sprite[6].setPosition(350,175);
        break ;
             case 7:
        rect[7].setPosition(525,175);
        sprite[7].setPosition(525,175);
        break ;
              case 8:
        rect[8].setPosition(0,350);
        sprite[8].setPosition(0,350);
        break ;
             case 9:
        rect[9].setPosition(175,350);
        sprite[9].setPosition(175,350);
        break ;
               case 10:
        rect[10].setPosition(350,350);
        sprite[10].setPosition(350,350);
        break ;
              case 11:
        rect[11].setPosition(525,350);
        sprite[11].setPosition(525,350);
        break ;


        case 12:
        rect[12].setPosition(0,525);
        sprite[12].setPosition(0,525);
        break ;
             case 13:
        rect[13].setPosition(175,525);
        sprite[13].setPosition(175,525);
        break ;
               case 14:
        rect[14].setPosition(350,525);
        sprite[14].setPosition(350,525);
        break ;
              case 15:
        rect[15].setPosition(525,525);
        sprite[15].setPosition(525,525);
        break ;


   }

}


}
///////////// theme geographie

Level3::Level3(int c1,int c2)
{

for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<16;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<16;i++)
        carteinitiale[i]=-1 ;

    if(!texture[0].loadFromFile("image1t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[7].loadFromFile("image8t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[9].loadFromFile("image10t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

       if(!texture[10].loadFromFile("image11t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;


       if(!texture[6].loadFromFile("image7t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[8].loadFromFile("image9t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[11].loadFromFile("image12t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[12].loadFromFile("image13t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[13].loadFromFile("image14t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[14].loadFromFile("image15t1l3.jpg",sf::IntRect(0,0,150,150)))
      std::cout << "erreur de chargement" << endl;



    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }

int j=0 ;
int  x ;
int i=0 ,z=0;

     while(i<16 && z<7)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%16;
        if(tabj[i]!=-1)
            i++ ;
        if(tabj[j]==-1 && tabt[x]==-1 && j>i )

               {tabt[x]=0;
               tabj[j]=0;
               tabj[i]=0;

               cout << "i est egale a "<<i<< "  la valeur de j est  "<<j<< "  la valeur de x est  "<<x <<endl;
                sprite[i].setTexture(texture[x]);
                sprite[j].setTexture(texture[x]);
                i++ ;
                z++ ;

               }

        }


        for(int q=0;q<15 ;q++)
             if(tabt[q]==-1)
                    for(int k=0;k<16 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }

for(int i=0 ;i<16;i++)
{
   rect[i].setSize(sf::Vector2f(150,150));
   rect[i].setFillColor(Color::Green);

     switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(175,0);
        sprite[1].setPosition(175,0);
        break ;

        case 2:
        rect[2].setPosition(350,0);
        sprite[2].setPosition(350,0);
        break ;

          case 3:
        rect[3].setPosition(525,0);
        sprite[3].setPosition(528,0);
        break ;

         case 4:
        rect[4].setPosition(0,175);
        sprite[4].setPosition(0,175);
        break ;
           case 5:
        rect[5].setPosition(175,175);
        sprite[5].setPosition(175,175);
        break ;
            case 6:
        rect[6].setPosition(350,175);
        sprite[6].setPosition(350,175);
        break ;
             case 7:
        rect[7].setPosition(525,175);
        sprite[7].setPosition(525,175);
        break ;
              case 8:
        rect[8].setPosition(0,350);
        sprite[8].setPosition(0,350);
        break ;
             case 9:
        rect[9].setPosition(175,350);
        sprite[9].setPosition(175,350);
        break ;
               case 10:
        rect[10].setPosition(350,350);
        sprite[10].setPosition(350,350);
        break ;
              case 11:
        rect[11].setPosition(525,350);
        sprite[11].setPosition(525,350);
        break ;


        case 12:
        rect[12].setPosition(0,525);
        sprite[12].setPosition(0,525);
        break ;
             case 13:
        rect[13].setPosition(175,525);
        sprite[13].setPosition(175,525);
        break ;
               case 14:
        rect[14].setPosition(350,525);
        sprite[14].setPosition(350,525);
        break ;
              case 15:
        rect[15].setPosition(525,525);
        sprite[15].setPosition(525,525);
        break ;


   }


}

}

int Level3::selected(int x,int y)
{
    for(int i=0 ;i<16 ;i++)
                {sf::FloatRect bounds = rect[i].getGlobalBounds();
                  if(bounds.contains(x ,y))
                       return (i)  ;

                }
}


int Level3::start(sf::Clock tm)
{
    int st ;

    sf::Time t=seconds(3) ;
    if(tm.getElapsedTime()>t)
        {for(int i=0 ;i<16;i++)
        carteinitiale[i]=-1 ;
        st=-1;
        deb=0 ;
        }
    else
        {for(int i=0 ;i<16;i++)
        carteinitiale[i]=1 ;
        st=1 ;
        }

     return(st);
}
bool Level3::test()
{
    Clock tt ;
    sf::Time t=seconds(0.3) ;
 while(true)
 {
     if(tt.getElapsedTime()>t)
        return(true);
 }

}

void Level3::carteselectionne(int k,int carte)
{
    if(k==1)
         {
             carteselect[0]=carte;
         }
    else if(k==2)
          {carteselect[1]=carte;

          }
}

bool Level3::gagner()
{
    for (int i=0 ;i<16;i++)
        if(carteinitiale[i]==-1)
               return(false) ;
    return(true) ;
}
void Level3::run()
{


    sf::RenderWindow window(sf::VideoMode(900,700), "SFML works!");
    sf::Vector2i possouris ;
    sf::Event event;
    sf::Time t=seconds(0.6) ;
    Time tf=seconds(65) ;
    int k=0 ;
    int s=0 ;
    int st=0;
    deb=1 ;
       Clock tm ;

      while (window.isOpen())
    {


        if(st!=1 && deb==1)
          {int st=start(tm);
             Clock tme ;
          }
        while (window.pollEvent(event))

        {

            if (event.type == sf::Event::Closed)
                window.close();

               else if(event.type==Event::MouseButtonPressed)

                    {
                    possouris=sf::Mouse::getPosition(window);
                         k++;
                    int pos=selected(possouris.x,possouris.y) ;

                     if(k==1)
                       {carteselect[0]=pos;
                       carteinitiale[pos]=1;
                       cout<< "la valeur de k est     " <<k<<"  la carte selectionner    "<<carteselect[0]<<endl ;}

                     else if(k==2)
                        {carteselect[1]=pos;
                        carteinitiale[pos]=1;
                        cout<< "la valeur de k est     " <<k<<"  la carte selectionner    "<<carteselect[1]<<endl ;

                window.clear() ;
   for(int i=0 ;i<16 ;i++)
    if (carteinitiale[i]==1)
         window.draw(sprite[i]) ;
   else
        window.draw(rect[i]) ;
     window.display() ;

                        }


                    }

if (sprite[carteselect[0]].getTexture() == sprite[carteselect[1]].getTexture() && k>=2)
                      { carteinitiale[carteselect[0]]=1;
                      carteinitiale[carteselect[1]]=1;
                      carteselect[0]=-1;
                      carteselect[1]=-1;
                      k=0 ;
                      cout<<"ils sont correctes"<<endl ;
                      }
        else if(sprite[carteselect[0]].getTexture()!= sprite[carteselect[1]].getTexture() && k>=2 && test())
        {
        carteinitiale[carteselect[1]]=-1 ;
        carteinitiale[carteselect[0]]=-1;
        carteselect[0]=-1;
        carteselect[1]=-1;
        k=0 ;

        cout<<"   ils ne sont    pas correcte  "<< endl;
         }

   if(gagner() && tme.getElapsedTime()<tf)
          cout<<"  vous avez gagnez  "<<endl ;
 if(!gagner() && tme.getElapsedTime()>tf)
            {
                cout<<"  vous voulez continuer vous devez repondre au quiz correctement  "<<endl ;
            Question q(900,700);
            int r;
            q.run(q,r);

            }

    }

 window.clear() ;
   for(int i=0 ;i<16 ;i++)
    if (carteinitiale[i]==1)
         window.draw(sprite[i]) ;
   else
        window.draw(rect[i]) ;
     window.display() ;

    }

}

Level3::~Level3()
{

}

