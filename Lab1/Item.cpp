#include "pch.h"
#include "Item.h"
#include "List.h"
#include "iostream"

Item::Item()
{
	this->prev = nullptr;
	this->next = nullptr;
	this->list = nullptr;
}

Item::Item(List* list)
{
	this->prev = nullptr;
	this->next = nullptr;
	this->list = list;
}

Item::~Item()
{
	cout << "I AM DELETE" << endl;
	if (this == list->getHead()) list->setHead(this->next);
	if (this == list->getTail()) list->setTail(this->next);
	if (this->next != nullptr) this->getNext()->setPrev(this->prev);
	if (this->prev != nullptr) this->getPrev()->setNext(this->next);
}

List * Item::getList()
{
	return this->list;
}

Item * Item::getPrev() const
{
	return this->prev;
}

Item * Item::getNext() const
{
	return this->next;
}

void Item::setNext(Item * item)
{
	this->next = item;
}

void Item::setPrev(Item * item)
{
	this->prev = item;
}
void Item::setList(List * list)
{
	this->list = list;
}

void Item::del() {
	
	delete this;
}


Item * Item::clone()
{
	return new Item(*this);
}

void Item::print() {
	cout <<  this->prev << " " << this << " " << this->next << endl;
}