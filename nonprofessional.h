#pragma once
#include <iostream>
#include "employee.h"

using namespace std;

class Nonprofessional : public Employee {
private:
  double hourlyRate = 15; //nonprofessionals get paid hourly

public:
  Nonprofessional():Employee(){} //default constructor
  Nonprofessional(string n):Employee(n, "Nonprofessional", 0, 0) {} //main constructor

  void working(); //Employee "works" for a week

  void weeklySalary(); //Displays amount made in a work week

  void healthCareContribution(); //Shows employer's healthcare contribution

  void vacationDaysEarned(); //Displays available vacation days
};