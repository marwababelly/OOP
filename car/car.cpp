#include <iostream>
#include "car.h"

int car:: count = 0;
void car::setmaker(string m)
{
    maker = m;
}
void car::setmodel(int n)
{
    model = n;
}
void car::setcolor(string c)
{
    color = c;
}
string car::getmaker()
{
    return maker;
}
int car::getmodel()
{
    return model;
}
string car::getcolor()
{
    return color;
}
int car::getcount()
{
     return count++;
}
car::car() : maker("Sapa"), model(2021), color("Blak")
{
  
};

car::car(string m, int mo, string c) : maker(m), model(mo), color(c)
{
  
};
//car ::car()
//{
//    maker = ("Honda");
//    model = 2020;
//    color = ("Red");
//};
car :: ~car()
{
    cout << "\nGood bye" << endl;
};
