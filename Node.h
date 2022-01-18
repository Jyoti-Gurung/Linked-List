 #ifndef NODE_H
#define NODE_H
#include <iostream> 
#include "Student.h"

using namespace std;

class Node {
  public:
    Node(Student* newStudent);
    ~Node();
    Node* getNext();
    void setNext(Node* newNext);
    Student* getStudent();

  private:
    Student* student;
    Node* next;
};

#endif
