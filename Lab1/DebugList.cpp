#include "pch.h"
#include "DebugList.h"
#include<iostream>


DebugList::DebugList(): List()
{
	
}

void DebugList::print()
{
	List::print();
}

DebugList::~DebugList()
{
}
