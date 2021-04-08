#include "calculat.h"

int calculat::add(int num1, int num2)
{
    return num1+num2;
}

int calculat::add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

float calculat::add(float num1, float num2)
{
    return num1 + num2;
}

string calculat::add(string a, string b)
{
    return  a + " " + b;
}


//calculat calculat::m(calculat x)
//{
//    calculat ans;
//    ans.c1 = c1 + x.c1;
//    ans.c2 = c2 + x.c2;
//    return ans;
//}
