#include<iostream>
using namespace std;

struct Nod {
	int data;
	Nod* next;
};

Nod* createNod(int data)
{
	Nod* nodNou = new Nod();
	nodNou->data = data;
	nodNou->next = NULL;
	return nodNou;
}
