#pragma once
using namespace std;
class List;
class Item
{
public:
	Item();
	Item(List* list);
	~Item();
	List * getList();
	Item* getPrev() const;
	Item* getNext() const;
	void setNext(Item* item);
	void setPrev(Item* item);

	void setList(List * list);
	void del();

	virtual Item* clone();
	virtual void print();


private:
	Item *prev;
	Item *next;
	List* list;
};

