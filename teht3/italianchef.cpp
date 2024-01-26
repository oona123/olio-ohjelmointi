#include "italianchef.h"
#include <iostream>

using namespace std;


ItalianChef::ItalianChef(string name, int v, int j): Chef(name)
{
    vesi=v;
    jauhot=j;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta with special recipe"<< endl;
    cout << "Chef " << name << " uses jauhot:"<< jauhot << endl;
    cout << "Chef "<< name << " uses vesi:"<< vesi << endl;

}
