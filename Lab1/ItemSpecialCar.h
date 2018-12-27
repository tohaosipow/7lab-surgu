#pragma once
#include "ItemBase.h"
class ItemSpecialCar :
	public ItemBase
{
public:
	ItemSpecialCar();
	~ItemSpecialCar();
private:
	char describe[128]; 
};

