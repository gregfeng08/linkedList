#ifndef STUDENT_H //Header guards
#define STUDENT_H

#include <iostream> //Imports
#include <cstring>

using namespace std;

class Student {
 public:
  Student(const char*, int); //Pulic function and variable definitions for use in the main program
  ~Student();
  char* getName();
  int getID();
 private:
  char* nameInput; //Private variable definitions for use in Student.cpp
  int idInput;
};

#endif
