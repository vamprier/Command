// Command.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "Barbecuer.h"
#include "BakeMuttonCommand.h"
#include "BakeChickenWingCommand.h"
#include "Waiter.h"

int main(int argc, char* argv[])
{
	Barbecuer* boy = new Barbecuer();
	Command* bakem = new BakeMuttonCommand(boy,10);
	Command* bakec = new BakeChickenWingCommand(boy,2);
	Waiter* girl = new Waiter();

	girl->SetOrder(bakem);
	girl->SetOrder(bakec);

	girl->Notify();

	cin.ignore();
	return 0;
}

