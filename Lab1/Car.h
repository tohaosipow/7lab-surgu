#pragma once
#include "Item.h"

enum carType {pass, microbus, bus, cargo, special, undefined};

class Car :
	public Item
{
public:
	Car();
	~Car();

	//Getters
	int getTypeEngine() const;
	int getGovNumber() const;
	int getOwner() const;
	int getModel() const;
	int getColor() const;
	virtual int getPassCapacity() const;
	carType getType() const;

	//Setters

	void setTypeEngine(int typeEngine);
	void setGovNumber(int govNumber);
	void setOwner(int owner);
	void setModel(int model);
	void setColor(int color);
	void setType(carType type);

	static Car * factoryByType(carType type);

	

	virtual Car* clone();
	//methods
	virtual void input();
	static Car* inputFactory();
	virtual void print();


	
private:
	int typeEngine;
	int govnumber;
	int owner;
	int brand;
	int model;
	int color;
	carType type;
	carType getTypeByMenu(int menu);

};

