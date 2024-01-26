#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
public:
    ItalianChef(string,int,int);
    string getName();
    void makePasta();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
