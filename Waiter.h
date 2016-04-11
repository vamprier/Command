#ifndef WAITER_H
#define WAITER_H

#include "Command.h"
#include <vector>
#include <algorithm>

class Waiter
{
public:
	Waiter(void);
	~Waiter(void);
public:
	void SetOrder(Command* c);
	void CancelOrder(Command* c);
	void Notify();
private:
	vector<Command*> comVec;
};

#endif