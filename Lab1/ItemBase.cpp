#include "pch.h"
#include "ItemBase.h"


ItemBase::ItemBase()
{
}


ItemBase::~ItemBase()
{
	Item::~Item();
}

char* ItemBase::getGovNumber() {
	return this->gov_number;
}

void ItemBase::setGovNumber(char* number) {
	this->gov_number = number;
}

char* ItemBase::getOwner() {
	return this->owner;
}

void ItemBase::setOwner(char * owner)
{
}

char * ItemBase::getBrand()
{
	return nullptr;
}

void ItemBase::setBrand(char * brand)
{
}

char * ItemBase::getColor()
{
	return nullptr;
}

void * ItemBase::setColor(char * color)
{
	return nullptr;
}

enum type ItemBase::getType()
{
	return this->type;
}
