#include<iostream>
using namespace std;

#define N  100

bool IsEmpty(int poz)
{
	if (poz == 0)
		return true;
	return false;
}

void push(int STIVA[], int& poz, int numar)
{
	poz++;
	STIVA[poz] = numar;
}

int peek(int STIVA[], int poz)
{
	return STIVA[poz];
}

void pop(int& poz)
{
	poz--;
}

int main()
{
	int STIVA[N], poz = 0;
	cout << "Stiva este goala: " << IsEmpty(poz) << endl;
	push(STIVA, poz, 56);
	cout << "Varful stivei este: " << peek(STIVA, poz) << endl;
	push(STIVA, poz, 67);
	push(STIVA, poz, 7);
	push(STIVA, poz, 19);
	cout << "Varful stivei este: " << peek(STIVA, poz) << endl;
	pop(poz);
	cout << "Varful stivei este: " << peek(STIVA, poz) << endl;
	pop(poz);
	pop(poz);
	pop(poz);
	cout << "Varful stivei este: " << peek(STIVA, poz) << endl;
	return 0;
}