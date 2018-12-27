#pragma once
#include "List.h"
class List;
class DebugList : public List
{
public:
	DebugList();
	void print() override;
	~DebugList();
};

