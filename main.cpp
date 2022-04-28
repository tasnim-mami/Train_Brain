#include <SFML/Graphics.hpp>
#include <iostream>
#include "Menu/include/Menu.h"
using namespace std;
#include "Carte/include/Carte.h"
#include "Carte/include/Level2.h"
#include "Carte/include/Level3.h"
using namespace sf ;


int main()
{
    Menu menu(900,700);
	menu.run();
    return 0;
}

