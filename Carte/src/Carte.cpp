#include "../include/Carte.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>
#include "../../Quiz/include/Question.h"
using namespace std ;
using namespace sf ;

Carte::Carte()
{
    //backgroundmusic
 if (!musique.openFromFile("sound/gamemusic.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }

 //sounds
 if (!buffer1.loadFromFile("sound/turnedcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer2.loadFromFile("sound/correctcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer3.loadFromFile("sound/wrongcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer4.loadFromFile("sound/win.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<12;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<12;i++)
        carteinitiale[i]=-1 ;

    if(!texture[0].loadFromFile("image1tm2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2tm2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3tm2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4tm2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5tm2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6tm2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[7].loadFromFile("image8t2.jpg",sf::IntRect(50,0,175,175)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[9].loadFromFile("image10t2.jpg",sf::IntRect(50,0,175,175)))
      std::cout << "erreur de chargement" << endl;

       if(!texture[10].loadFromFile("image11t2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;


       if(!texture[6].loadFromFile("image7tm2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[8].loadFromFile("image9t2.jpg",sf::IntRect(50,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[11].loadFromFile("image12t2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[12].loadFromFile("image13t2.jpg",sf::IntRect(50,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[13].loadFromFile("image14t2.jpg",sf::IntRect(50,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[14].loadFromFile("image15t2.jpg",sf::IntRect(25,0,175,175)))
      std::cout << "erreur de chargement" << endl;



    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }


int j=0 ;
int  x ;
int i=0 ,z=0;

       while(i<12 && z<6)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%12;
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
                    for(int k=0;k<12 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }


for(int i=0 ;i<12;i++)
{
   rect[i].setSize(sf::Vector2f(175,175));
   rect[i].setFillColor(Color::Green);

   switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(200,0);
        sprite[1].setPosition(200,0);
        break ;

        case 2:
        rect[2].setPosition(400,0);
        sprite[2].setPosition(400,0);
        break ;

          case 3:
        rect[3].setPosition(600,0);
        sprite[3].setPosition(600,0);
        break ;

         case 4:
        rect[4].setPosition(0,200);
        sprite[4].setPosition(0,200);
        break ;
           case 5:
        rect[5].setPosition(200,200);
        sprite[5].setPosition(200,200);
        break ;
            case 6:
        rect[6].setPosition(400,200);
        sprite[6].setPosition(400,200);
        break ;
             case 7:
        rect[7].setPosition(600,200);
        sprite[7].setPosition(600,200);
        break ;
              case 8:
        rect[8].setPosition(0,400);
        sprite[8].setPosition(0,400);
        break ;
             case 9:
        rect[9].setPosition(200,400);
        sprite[9].setPosition(200,400);
        break ;
               case 10:
        rect[10].setPosition(400,400);
        sprite[10].setPosition(400,400);
        break ;
              case 11:
        rect[11].setPosition(600,400);
        sprite[11].setPosition(600,400);
        break ;


   }
}


}
Carte::Carte(int c)
{
    //backgroundmusic
 if (!musique.openFromFile("sound/gamemusic.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }

 //sounds
 if (!buffer1.loadFromFile("sound/turnedcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer2.loadFromFile("sound/correctcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer3.loadFromFile("sound/wrongcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer4.loadFromFile("sound/win.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }


for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<12;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<12;i++)
        carteinitiale[i]=-1 ;




  if(!texture[0].loadFromFile("image1t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[6].loadFromFile("image7t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[7].loadFromFile("image8t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[8].loadFromFile("image9t3.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl ;


        if(!texture[9].loadFromFile("image10t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[10].loadFromFile("image11t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[11].loadFromFile("image12t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;


      if(!texture[12].loadFromFile("image13t3.jpg",sf::IntRect(50,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[13].loadFromFile("image14t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[14].loadFromFile("image15t3.jpg",sf::IntRect(25,0,175,175)))
      std::cout << "erreur de chargement" << endl;


    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }



int j=0 ;
int x ;
int i=0 ,z=0;

      while(i<12 && z<6)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%12;
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
                    for(int k=0;k<12 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }

for(int i=0 ;i<12;i++)
{
   rect[i].setSize(sf::Vector2f(175,175));
   rect[i].setFillColor(Color::Green);

   switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(200,0);
        sprite[1].setPosition(200,0);
        break ;

        case 2:
        rect[2].setPosition(400,0);
        sprite[2].setPosition(400,0);
        break ;

          case 3:
        rect[3].setPosition(600,0);
        sprite[3].setPosition(600,0);
        break ;

         case 4:
        rect[4].setPosition(0,200);
        sprite[4].setPosition(0,200);
        break ;
           case 5:
        rect[5].setPosition(200,200);
        sprite[5].setPosition(200,200);
        break ;
            case 6:
        rect[6].setPosition(400,200);
        sprite[6].setPosition(400,200);
        break ;
             case 7:
        rect[7].setPosition(600,200);
        sprite[7].setPosition(600,200);
        break ;
              case 8:
        rect[8].setPosition(0,400);
        sprite[8].setPosition(0,400);
        break ;
             case 9:
        rect[9].setPosition(200,400);
        sprite[9].setPosition(200,400);
        break ;
               case 10:
        rect[10].setPosition(400,400);
        sprite[10].setPosition(400,400);
        break ;
              case 11:
        rect[11].setPosition(600,400);
        sprite[11].setPosition(600,400);
        break ;


   }
}


}


Carte::Carte(int c1,int c2)
{
    //backgroundmusic
 if (!musique.openFromFile("sound/gamemusic.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }

 //sounds
 if (!buffer1.loadFromFile("sound/turnedcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer2.loadFromFile("sound/correctcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer3.loadFromFile("sound/wrongcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer4.loadFromFile("sound/win.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }


for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<12;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<12;i++)
        carteinitiale[i]=-1 ;

    if(!texture[0].loadFromFile("image1t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[7].loadFromFile("image8t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[9].loadFromFile("image10t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

       if(!texture[10].loadFromFile("image11t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;


       if(!texture[6].loadFromFile("image7t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[8].loadFromFile("image9t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[11].loadFromFile("image12t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[12].loadFromFile("image13t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[13].loadFromFile("image14t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[14].loadFromFile("image15t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;


    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }



int j=0 ;
int  x ;
int i=0 ,z=0;

      while(i<12 && z<6)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%12;
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
                    for(int k=0;k<12 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }

 cout<< "la position est bien" << endl ;

for(int i=0 ;i<12;i++)
{
   rect[i].setSize(sf::Vector2f(175,175));
   rect[i].setFillColor(Color::Green);

   switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(200,0);
        sprite[1].setPosition(200,0);
        break ;

        case 2:
        rect[2].setPosition(400,0);
        sprite[2].setPosition(400,0);
        break ;

          case 3:
        rect[3].setPosition(600,0);
        sprite[3].setPosition(600,0);
        break ;

         case 4:
        rect[4].setPosition(0,200);
        sprite[4].setPosition(0,200);
        break ;
           case 5:
        rect[5].setPosition(200,200);
        sprite[5].setPosition(200,200);
        break ;
            case 6:
        rect[6].setPosition(400,200);
        sprite[6].setPosition(400,200);
        break ;
             case 7:
        rect[7].setPosition(600,200);
        sprite[7].setPosition(600,200);
        break ;
              case 8:
        rect[8].setPosition(0,400);
        sprite[8].setPosition(0,400);
        break ;
             case 9:
        rect[9].setPosition(200,400);
        sprite[9].setPosition(200,400);
        break ;
               case 10:
        rect[10].setPosition(400,400);
        sprite[10].setPosition(400,400);
        break ;
              case 11:
        rect[11].setPosition(600,400);
        sprite[11].setPosition(600,400);
        break ;


   }
}


}


int Carte::selected(int x,int y)
{
    for(int i=0 ;i<12 ;i++)
                {sf::FloatRect bounds = rect[i].getGlobalBounds();
                  if(bounds.contains(x ,y))
                       return (i)  ;

                }
}


int Carte::start(sf::Clock tm)
{
    int st ;

    sf::Time t=seconds(3) ;
    if(tm.getElapsedTime()>t)
        {for(int i=0 ;i<12;i++)
        carteinitiale[i]=-1 ;
        st=-1;
        deb=0 ;
        }
    else
        {for(int i=0 ;i<12;i++)
        carteinitiale[i]=1 ;
        st=1 ;
        }

     return(st);
}
bool Carte::test()
{
    Clock tt ;
    sf::Time t=seconds(0.3) ;
 while(true)
 {
     if(tt.getElapsedTime()>t)
        return(true);
 }

}


void Carte::carteselectionne(int k,int carte)
{
    if(k==1)
         {
             carteselect[0]=carte;
         }
    else if(k==2)
          {carteselect[1]=carte;

          }
}

bool Carte::gagner()
{
    for (int i=0 ;i<12;i++)
        if(carteinitiale[i]==-1)
               return(false) ;
    return(true) ;
}
void Carte::run()
{

    sf::RenderWindow window(sf::VideoMode(900,700), "Train Brain");
    sf::Vector2i possouris ;
    sf::Event event;
    Time tf=seconds(45) ;
    int k=0 ;
    int s=0 ;
    int st=0;
    deb=1 ;
       Clock tm ;
       //musique.play();


      while (window.isOpen())
    {

       /* if(deb==1)
            Clock tme ;*/
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
                         /*if ((k==1)||(k==2))
                         {
                             sound.setBuffer(buffer);
                             sound.play();
                         }*/

                         cout<<"cardturned sound"<<endl;
                    int pos=selected(possouris.x,possouris.y) ;

                     if(k==1)
                       {
                           sound.setBuffer(buffer1);
                            sound.play();
                           carteselect[0]=pos;
                       carteinitiale[pos]=1;
                       cout<< "la valeur de k est     " <<k<<"  la carte selectionner    "<<carteselect[0]<<endl ;}

                     else if(k==2)
                        {
                            sound.setBuffer(buffer1);
                             sound.play();
                            carteselect[1]=pos;
                        carteinitiale[pos]=1;
                        cout<< "la valeur de k est     " <<k<<"  la carte selectionner    "<<carteselect[1]<<endl ;

                window.clear() ;
   for(int i=0 ;i<12 ;i++)
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
                      sound.setBuffer(buffer2);
                        sound.play();
                      cout<<"ils sont correctes"<<endl ;
                      }
        else if(sprite[carteselect[0]].getTexture()!= sprite[carteselect[1]].getTexture() && k>=2 && test())
        {
        carteinitiale[carteselect[1]]=-1 ;
        carteinitiale[carteselect[0]]=-1;
        carteselect[0]=-1;
        carteselect[1]=-1;
        k=0 ;
        sound.setBuffer(buffer3);
                        sound.play();
        cout<<"   ils ne sont    pas correcte  "<< endl;
         }



    }

    if(gagner() && tme.getElapsedTime()<tf && deb==0)
    {
        sound.setBuffer(buffer4);
        sound.play();
        //window_win();
        /*sf::RenderWindow win(sf::VideoMode(100,100),"Vous avez gagné");
        sf::Text textwin;
        textwin.setString("Félicitaions! Vous avez gagné!");
        while (win.isOpen())
        {
            sf::Event eventwin;
            if (eventwin.type == sf::Event::Closed)
            win.close();
            win.clear();
            win.draw(textwin);
            win.display();
        }*/

        cout<<"  vous avez gagnez  "<<endl ;
    }

    if(!gagner() && tme.getElapsedTime()>tf)
    {

            cout<<"  vous voulez continuer vous devez repondre au quiz correctement  "<<endl ;

        Question q(900,700);
            int r;

            q.run(q,r);

            cout<<"valeur de r="<<r<<endl;
            if(r==0)
            {
                //reponse fausse au quiz
                sf::RenderWindow loose(sf::VideoMode(100,100),"Vous avez perdu");
                sf::Text textloose;
                textloose.setString("Malheureusement! Vous avez perdu!");
                while (loose.isOpen())
                 {
                   sf::Event eventloose;
                   if (eventloose.type == sf::Event::Closed)
                   loose.close();
                   loose.clear();
                   loose.draw(textloose);
                   loose.display();

            }
            }
            else
            {
                //reponse juste au quiz
            }



    }




   window.clear() ;
   for(int i=0 ;i<12 ;i++)
   if (carteinitiale[i]==1)
         window.draw(sprite[i]) ;
   else
        window.draw(rect[i]) ;
     window.display() ;


    }


}

Carte::~Carte()
{

}

/*void window_win()
{
    sf::RenderWindow win()
}*/
