#pragma once
#include "Item.h"
class ItemBase :
	public Item
{
public:
	ItemBase();
	~ItemBase();

	char * getGovNumber();

	void setGovNumber(char * number);

	char * getOwner();
	void setOwner(char * owner);
	char * getBrand();
	void setBrand(char* brand);
	char * getColor();
	void * setColor(char* color);
	enum type { passcar, minimbus, bus, truck, specialcar } getType();
	void setType(type type);


private:
	char* gov_number;
	char* owner;
	char* brand;
	char* model;
	char* color;
	enum type{passcar, minimbus, bus, truck, specialcar} type;

};

