#pragma once
#include <iostream>

using namespace std;

class Employee {
protected:
  string name;
  int Earned;
public:
    Employee(){
        name = " "; 
        age= 0; 
        type = " ";
    }
    Employee(string n, int a, string t) {
        name = n; 
        age=a; 
        type = t;
    }
    void setName(string n) {
        name = n;
    }
    string setName(){
        return name;
    }
    virtual void print(){
    }
};