#pragma once
#include "ItemBase.h"
class ItemMiniBus :
	public ItemBase
{
public:
	ItemMiniBus();
	~ItemMiniBus();

private:
	int engineType;
	int	numSeats;

};

