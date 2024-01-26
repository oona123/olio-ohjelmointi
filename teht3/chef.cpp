#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string chefname)
{
    name=chefname;
    cout << "Chef " << name << " konstruktori"<< endl;
}

void Chef::makesalad()
{
//cout << name << " makes salad"<< endl;
}

void Chef::makesoup()
{
//cout << "Chef Anthony Bourdain makes soup"<< endl;
}

Chef::~Chef()
{
cout << "Chef " << name << " destruktori"<< endl;
}
