#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Gordon Ramsay");
    kokki.makesalad();
    kokki.makesoup();

    ItalianChef kokki2("Mario", 150, 250);
    kokki2.makePasta();
    kokki2.makesalad();

    return 0;
}
