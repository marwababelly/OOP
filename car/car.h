#pragma once
#include<iostream>
#include<string>
using namespace std;
class car
{
private:
	string maker;
	int model;
	string color;
	static int count;
public:
	void setmaker(string m);
	void setmodel(int n);
	void setcolor(string c);
	string getmaker();
	int getmodel();
	string getcolor();
	int getcount();
	
	car(string m, int mo, string c);
	car();
	~car();

};


