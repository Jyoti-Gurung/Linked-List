//to set up student things and student pointer variable, use in Node.Cpp

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream> 

using namespace std;

class Student {
  public:
    Student* getStudent();
    void setStudent(Student* newStudent);
  private:
    Student* student;
};

#endif
