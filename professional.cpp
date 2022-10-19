#include <iostream>
#include "professional.h"

//Hours and money increase a week's worth, update is outputted
void Professional::working(){
  hours += 40;
  money += 2500;
  cout << getName() <<" has now worked a total of ";
  cout << hours << " hours!" << endl;
}

//Shows how much employee makes in a week of work
void Professional::weeklySalary(){
  cout << "Your weekly Salary is $2500!" << endl;
}

//Employer contributes 10% of money earned, result is outputted
void Professional::healthCareContribution(){
  double contribution = moneyEarned()* .10;
  cout << "Employer has contributed $" << contribution << endl;
}

//Displays the number of vacation days that professional's get
void Professional::vacationDaysEarned(){
  cout << "You get 30 Days of Vacation!" << endl;
}