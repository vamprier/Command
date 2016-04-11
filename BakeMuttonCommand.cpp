#include "BakeMuttonCommand.h"


BakeMuttonCommand::BakeMuttonCommand(Barbecuer* b,int n):Command(b,n)
{
}


BakeMuttonCommand::~BakeMuttonCommand(void)
{
}

void BakeMuttonCommand::ExcuteCommand()
{
	receiver->BakeMutton(number);
}