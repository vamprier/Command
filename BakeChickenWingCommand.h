#ifndef BAKECHICKENWINGCOMMAND_H
#define BAKECHICKENWINGCOMMAND_H


#include "command.h"

class BakeChickenWingCommand : public Command
{
public:
	BakeChickenWingCommand(Barbecuer* b,int n);
	~BakeChickenWingCommand(void);
public:
	virtual void ExcuteCommand();
};

#endif