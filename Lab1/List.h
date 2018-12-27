#pragma once
using namespace std;
class Item;
class List
{

public:
	List();
	List(Item *head, Item *tail);
	~List();
	Item* getHead();
	void setHead(Item* item);
	Item* getTail();
	void setTail(Item* item);

	void add(Item * item);

	Item* get(int index);

	int count();

	int getIndex(Item * item);

	void insert(Item * item, int pos);

	virtual void print();

	void clear();

	Item* operator[] (const int index);

private:
	Item *head;
	Item *tail;
};

