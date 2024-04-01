#pragma once
#include <iostream>
using namespace std;

typedef struct I {
	int a;
}Item;

class List {
private :
	int count = 0;
	Item* item;
public :
	void Create(int size);
	void Destroy();
	bool IsEmpty();
	bool IsFull();
	void Insert(int pos, Item I);
	void Display();
	void Delete(int pos);
	void Retrive(Item I);
};

