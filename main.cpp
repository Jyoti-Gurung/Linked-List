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
  cout << "Hello";
} 

/*

void add(int newValue) {
  Node* current = head;
  if (current == NULL) {
    head = Node(newValue);
  }
  else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->Node(newValue);
  }
}

void print(Node* next) {
  if (next == head) {
    cout << "List: ";
  }
  if (next != NULL) {
    cout << next->getStudent() << " ";
    print(next->getNext());
  }
  else {
    //do nothing
  }
}

*/
