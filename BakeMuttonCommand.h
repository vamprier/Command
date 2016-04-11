#ifndef BAKEMUTTONCOMMAND_H
#define BAKEMUTTONCOMMAND_H


#include "command.h"

class BakeMuttonCommand : public Command
{
public:
	BakeMuttonCommand(Barbecuer* b,int n);
	~BakeMuttonCommand(void);
public:
	virtual void ExcuteCommand();
};

#endif