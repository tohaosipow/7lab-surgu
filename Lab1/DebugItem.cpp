#include "pch.h"
#include "DebugItem.h"
#include<iostream>


DebugItem::DebugItem():Item()
{
}

DebugItem::DebugItem(int value)
{
	this->value = value;
}

void DebugItem::print(){
	cout << this->getPrev() << " " << this << ":" <<this->value<< " " << this->getNext() << endl;
}



DebugItem::~DebugItem()
{
	Item::~Item();
}
