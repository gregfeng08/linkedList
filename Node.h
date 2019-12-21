#include <iostream>
#include "Student.h"

using namespace std;

class Node {
 public:
  Node(); //COnstructor
  ~Node(); //Destrucot
  void setValue(Student*); //Function efinitions of the node class available for use to other classes
  Student* getValue();
  void setNext(Node* newnext);
  Node* getNext();
 private:
  Student* value; //Variable definitions of the node class variables private only to node.cpp
  Node* next;
};
