#ifndef BARBECUER_H
#define BARBECUER_H

#include <iostream>

using namespace std;

class Barbecuer
{
public:
	Barbecuer(void);
	~Barbecuer(void);
public:
	void BakeMutton(int number);
	void BakeChickenWing(int number);
};

#endif