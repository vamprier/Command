#include "BakeChickenWingCommand.h"


BakeChickenWingCommand::BakeChickenWingCommand(Barbecuer* b,int n):Command(b,n)
{
}


BakeChickenWingCommand::~BakeChickenWingCommand(void)
{
}

void BakeChickenWingCommand::ExcuteCommand()
{
	receiver->BakeChickenWing(number);
}