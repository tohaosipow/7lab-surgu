#pragma once
#include "Item.h"
class Item;
class DebugItem : public Item
{
public:
	DebugItem();
	DebugItem(int value);
	void print() override;
	~DebugItem();
private:
	int value;
};

