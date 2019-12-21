#include "Node.h" //Imports
#include "Student.h"
#include <iostream>

Node::Node() { //Constructor
  value = NULL;
  next = NULL;
}

Node::~Node() { //Destructor
  delete &value;
  next = NULL;
}

void Node::setValue(Student* newvalue) { //Sets the value of the node
  value = newvalue;
}

Student* Node::getValue() { //Returns the node number of the student
  return value;
}

void Node::setNext(Node* newnext) { //Sets the next node
  next = newnext;
}

Node* Node::getNext() { //Prints the next node
  return next;
}
