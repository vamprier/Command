#include "Waiter.h"


Waiter::Waiter(void)
{
}


Waiter::~Waiter(void)
{
}

void Waiter::SetOrder(Command* c)
{
	comVec.push_back(c);
}

void Waiter::CancelOrder(Command* c)
{
	vector<Command*>::iterator it = find(comVec.begin(),comVec.end(),c);
	if( it != comVec.end())
	{
		it = comVec.erase(it);
	}
}

void Waiter::Notify()
{
	vector<Command*>::iterator it;
	for( it = comVec.begin(); it != comVec.end(); ++it)
	{
		(*it)->ExcuteCommand();
	}
}