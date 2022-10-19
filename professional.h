#pragma once
#include <iostream>
#include "employee.h"

using namespace std;

class Professional : public Employee {
private:
  double monthlySalary = 10000; //professionals have a monthly salary

public:
  Professional():Employee(){} //default constructor
  Professional(string n):Employee(n, "Professional", 0, 0) {} //main constructor

  void working(); //Employee "works" for a week

  void weeklySalary(); //Displays amount made in a work week

  void healthCareContribution(); //Shows employer's healthcare contribution

  void vacationDaysEarned(); //Displays available vacation days
};