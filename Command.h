#ifndef COMMAND_H
#define COMMAND_H

#include "Barbecuer.h"

class Command
{
public:
	Command(Barbecuer* b,int n);
	virtual ~Command(void);
public:
	virtual void ExcuteCommand() = 0;
protected:
	Barbecuer* receiver;
	int number;
};

#endif