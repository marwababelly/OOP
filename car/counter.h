#pragma once
class Counter
{
public:
	unsigned int count;
private:
	Counter() :count(0)
	{
	}
	Counter(int c) : count(c)
	{
	}
	int getcount()
	{return count; }

	Counter operator ++()
	{
		++count;
		return Counter(count);
	}
	Counter operator --()
	{
		--count;
		return Counter(count);
	}
	Counter operator ++(int)
	{
		count++;
		return Counter(count);
	}
	Counter operator --(int)
	{
		count--;
		return Counter(count);
	}

};

