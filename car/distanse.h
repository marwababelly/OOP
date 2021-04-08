#pragma once
class distanse
{
private:
	int feet;
	float inches;
public:
	void setdistsnse(int f, float n);
	void print();
	distanse();
	distanse(int f, float n);
	distanse add(distanse d2);
	~distanse();
};

