
#include "pch.h"
#include "Item.h"
#include "List.h"
#include <iostream>


List::List()
{
	this->head = nullptr;
	this->tail = nullptr;

}
List::List(Item* head, Item* tail)
{
	this->head = nullptr;
	this->tail = nullptr;

}


List::~List()
{
}

Item* List::getHead()
{
	return this->head;
}

void List::setHead(Item* item) {
	this->head = item;
}

Item*List::getTail()
{
	return this->tail;
}

void List::setTail(Item* item) {
	this->tail = item;
}

void List::add(Item* item) {
	item->setNext(nullptr);
	item->setPrev(nullptr);

	if (this->head == nullptr || this->tail == nullptr) {
		this->head = item;
		this->tail = item;
	}
	else {
		item->setPrev(this->tail);
		this->tail->setNext(item);
		this->tail = item;
	}
	item->setList(this);
}

Item* List::get(int index) {
	Item* item = this->head;
	for ( int i = 0; item != nullptr; item = item->getNext(), i++){
		if (i == index) return item;
	}
	return nullptr;
}

int List::count() {
	int i = 0;
	for (Item* item = this->head; item != nullptr; item = item->getNext(), i++) {}
	return i;
}

int List::getIndex(Item* searchItem) {
	Item* item = this->head;
	for (int i = 0; item != nullptr; item = item->getNext(), i++) {
		if (item == searchItem) return i;
	}
	return -1;
}

void List::insert(Item *item, int pos) {
	item->setNext(nullptr);
	item->setPrev(nullptr);

	if (pos < 0) return;
	else if (pos == 0) {
		if (this->head == nullptr) {
			this->add(item);
		}
		else {
			this->head->setPrev(item);
			item->setNext(this->head);
			item->setPrev(nullptr);
			this->head = item;
		}

	}
	else if (pos >= this->count()) {
		this->add(item);
	}
	else {
		Item* itemG = this->get(pos);
		itemG->getPrev()->setNext(item);
		item->setNext(itemG);
		item->setPrev(itemG->getPrev());
		itemG->setPrev(item);
	}
	item->setList(this);
}

void List::print() {
	cout << "List " << this << endl;
	for (Item* item = this->head; item != nullptr; item = item->getNext()) {
		item->print();
	}
}

void List::clear() {
	for (Item* item = this->head; item != nullptr; item = item->getNext()) {
		delete(item->getPrev());
	}
	this->head = nullptr;
	this->tail = nullptr;
}

Item * List::operator[](const int index)
{
	return this->get(index);
}
