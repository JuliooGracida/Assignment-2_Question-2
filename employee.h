#pragma once
#include <iostream>

using namespace std;

class Employee {
protected: //Common variables for all derived classes
  string name;
  string type;
  double money;
  int hours;

public:
  Employee(){ //default constructor
    name = " ";
    type = " ";
    hours = 0;
    money = 0;
  }
  Employee(string n, string t, int h, int m) { //main constructor
    name = n;
    type = t;
    hours = h;
    money = m;
  }
  //Base functions that work for all derived functions.
  int hoursWorked() { return hours; }
  int moneyEarned() { return money; }
  string getName() { return name; }

  //virtual functions that will behaves uniquely to derived class
  virtual void working(){}
  virtual void weeklySalary(){}
  virtual void healthCareContribution(){}
  virtual void vacationDaysEarned(){}
};