#include <iostream>
#include "dialogue.h"
#include "nonprofessional.h"
#include "professional.h"

using namespace std;

int main() {
  //Initializes the variables and employees
  char selection;
  string employee;
  Nonprofessional Julio("Julio");
  Professional Lee("Lee");

  while(selection != 'q'){ //As long user doesn't (q)uit
    selectEmployee(employee, selection); //Choose Employee
    while(selection != 'c'){ //As long as they don't (c)hange
      printMenu(employee, selection); //Prints menu
      switch(selection){ //Takes selection
        case 'w': //Selected Employee Works
          employee == "Lee" ? 
            Lee.working():Julio.working();
          break;
        case 's': //Check how much Selected Employee makes each Week
          employee == "Lee" ? 
            Lee.weeklySalary():Julio.weeklySalary();
          break;
        case 'h': //See employer's contribution to selected employee
          employee == "Lee"?
            Lee.healthCareContribution():Julio.healthCareContribution();
          break;
        case 'v': //See how much vacation each employee has
          employee == "Lee"?
            Lee.vacationDaysEarned():Julio.vacationDaysEarned();
          break;
        case 'm': //Shows how much that employee has earned
          employee == "Lee"?
            cout << "You've made $" << Lee.moneyEarned() << "!" << endl:
            cout << "You've made $" << Julio.moneyEarned() << "!" << endl;
          break;
        case 'c': //Exits this while loop to select new employee
          break;
        case 'q': //Exits the Program
          cout << "Thank you for trying my program!!! :)" << endl;
          return 0;
        default: //Exception handling
          cout << "Naaah, try again\n";
          break;
      }
    }
  }
}