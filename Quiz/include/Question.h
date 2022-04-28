#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
using namespace std;
#ifndef QUESTION_H
#define QUESTION_H


class Question
{
  public:
        Question(float width, float height);
        Question(float width, float height,int);
        Question(float width, float height,int,int);
        virtual ~Question();

        void draw(sf::RenderWindow &window);
        int Answer(sf::RenderWindow &window);
        bool isHovered(sf::RenderWindow &window, sf::RectangleShape &rect);
        void set_rect_green(int);
        void set_rect_red(int);
        void temps(sf::RenderWindow &window);


        void run(Question &question,int);



    private:
        string ques[5];
        string r1[5];
        string r2[5];
        string r3[5];
        string corr[5];
        string repcorr;
        int indexcorr;
        int indexrep;
        sf::Font font;
        sf::Text txt[4];
        sf::RectangleShape rect[3];
        sf::RectangleShape re;

        sf::RectangleShape background;
        sf::Texture backgroundimage;
        sf::Text titre;
        sf::Text rmq;
        sf::Sprite sprite;
        sf::Texture logo;
        //sounds
        sf::SoundBuffer buffercorr;
        sf::Sound soundcorr;
        sf::SoundBuffer bufferfal;
        sf::Sound sound;

};

#endif // QUESTION_H
