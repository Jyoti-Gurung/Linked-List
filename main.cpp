/*
Auhtor: Jyoti Gurung
Date: 1/1122
Project: Linked List; Connect Node and Student Pointers
*/

#include <iostream>
#include "Node.h"
using namespace std;


void add(int newValue);
void print(Node* next);

Node* head = NULL;

int main() {
  add(5);
  print(head);
} 

void add(int newValue) {
  Node* current = head;
  if (current == NULL) {
    head = new Node();
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
  }
}

void print(Node* next) {
  if (next == head) {
    cout << "List: ";
  }
  if (next != NULL) {
    print(next->getNext());
  }
  else {
    //do nothing
  }
}
