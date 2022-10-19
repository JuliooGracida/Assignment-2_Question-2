#include <iostream>
#include "nonprofessional.h"

//Hours and money increase a week's worth, update is outputted
void Nonprofessional::working(){
  hours += 40;
  money += 40*15;
  cout << getName() <<" has now worked a total of ";
  cout << hours << " hours!" << endl;
}

//Shows how much the employee makes in a week of work
void Nonprofessional::weeklySalary(){
  cout << "You make $600 a week!" << endl;
}

//Employer contributes 5% of money earned, result is outputted
void Nonprofessional::healthCareContribution(){
  double contribution = moneyEarned()* .05;
  cout << "Employer has contributed $" << contribution << endl;
}

//divides (hours worked)/100 then outputs the number of vacation days
void Nonprofessional::vacationDaysEarned(){
  int hours = hoursWorked()/50;
  hours > 0 ?
    cout << "You have " << hours << " vacation hours(s)!" << endl:
    cout << "No Vacation Hours! Work atleast 50 hours." << endl;
}