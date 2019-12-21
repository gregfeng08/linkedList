#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

/*
Linked lists project
Written by: Gregory Feng
This program takes in the name and ID of a student and adds them to a linked list.
Problems: Working on fixing the segfault on the second node creation
 */

using namespace std;

Node* head = NULL; //Node creation
void print(Node* next); //Initial var definitions
void add(char* name,  int id);
int main() {
  char userInput[20];
  bool running = true;
  char name[20];
  int id;
  cout << "Welcome to student list: Linked lists!" << endl;
  while(running) { //Loop until quit
    cout << "What would you like to do? (ADD/PRINT/DELETE/QUIT)" << endl;
    cin >> userInput;
    if (strcmp(userInput, "ADD") == 0) {
      cout << "Name?" << endl;
      cin >> name;
      cin.clear();
      cin.ignore(999, '\n');
      cout << "ID?" << endl;
      cin >> id;
      add(name, id); //Uses the add function to add the name and ID
      cout << "Successfully added!" << endl; 
    }
    else if (strcmp(userInput, "PRINT") == 0) { //Prints the linked list
      print(head);
    }
    else if (strcmp(userInput, "QUIT") == 0) { //Stops the program
      running = false;
    }
  }
}


void add(char* name, int id) { //Adds the inputted information into the linked node
  Student* newvalue = new Student(name, id);
  Node* current = head;
  if (current == NULL) {
    head = new Node();
    head->setValue(newvalue); //Adds this to the very end of the list
  } else {
    while (current->getNext() != NULL) { 
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setValue(newvalue);
  }
}

void print(Node* next) { //Prints the linked list and all of the information
  if (next == head) {
    cout << "list:";
  }
  if (next != NULL) {
    cout << next->getValue()->getName() << ", " << next->getValue()->getID() << " ";
    print(next->getNext()); //Recalls the print function so that it keeps printing until it hits a NULL node
  }
  cout << endl;
}
