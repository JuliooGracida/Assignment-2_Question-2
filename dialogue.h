#include <iostream>

using namespace std;

//Prints Employee Options, Saves employee selection, and Resets selection
void selectEmployee(string &employee, char &selection){
  selection = 'w'; //Reset Selection
  while(true){
    cout << endl << "Please choose an employee!" << endl;
    cout << "Julio - Nonprofessional" << endl;
    cout << "Lee - Professional" << endl;
    cin >> employee; //saves employee selection
    if(employee == "Lee")
      break;
    else if (employee == "Julio")
      break;
    cout << "Not an Employee, Please Choose Again!" << endl;
  }
}

//Prints Menu options and saves selection for switch statement
void printMenu(string employee, char &selection){
  cout << endl << "Current Employee: ";
  employee == "Lee"? //ternary operator adds customization
    cout << "Lee (Professional)" << endl :
    cout << "Julio (Nonprofessional)" << endl;
  cout << "w - Work for a week" << endl;
  cout << "s - Check your Weekly Salary!" << endl;
  cout << "h - See your employer's healthcare contributions!" << endl;
  cout << "v - Check out how much vacation you've earned!" << endl;
  cout << "m - The amount of money you've earned!" << endl;
  cout << "c - Change Employee" << endl;
  cout << "q - End the Program" << endl << endl;
  cout << "What is your choice?: ";
  cin >> selection; //takes in and saves user input
}