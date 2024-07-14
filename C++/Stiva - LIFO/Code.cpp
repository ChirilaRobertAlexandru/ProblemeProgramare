#include    <iostream>

using namespace std;

struct Nod {
    int data;
    Nod* next;
};

Nod* newNode(int data) {
    Nod* nodNou = new Nod();
    nodNou->data = data;
    nodNou->next = NULL;
    return nodNou;
}

bool isEmpty(Nod* top) {
    return top == NULL;
}

void push(Nod*& top, int data) {
    Nod* nodNou = newNode(data);
    nodNou->next = top;
    top = nodNou;
}

int pop(Nod*& top) {
    if (isEmpty(top))
        return 0;

    Nod* tmp = top;
    top = top->next;
    int rezultat = tmp->data;
    delete tmp;
    return rezultat;
}

int peek(Nod* top) {
    if (isEmpty(top))
        return 0;
    return top->data;
}

int main() {
    Nod* top = NULL;
    push(top, 2);
    push(top, 4);
    push(top, 6);
    push(top, 7);
    push(top, 8);
    cout << pop(top);
    cout << pop(top);
    cout << pop(top);
    return 0;
}