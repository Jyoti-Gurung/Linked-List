#include <iostream>
#include "Node.h"
#include "Student.h"

Node::Node(Student* newStudent) {
  student = newStudent;
  next = NULL;
}

Node::~Node() {
  delete &student;
  next = NULL;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}

Node* Node::getNext() {
  return next;
}

Student* Student::getStudent() {
  return student;
}
