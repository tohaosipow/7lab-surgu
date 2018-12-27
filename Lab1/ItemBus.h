#pragma once
#include "ItemBase.h"
class ItemBus :
	public ItemBase
{
public:
	ItemBus();
	~ItemBus();
private:
	int engineType;
	int numSeats;
	int cargoCapacity;
};

