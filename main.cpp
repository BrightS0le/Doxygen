/**
 * @file main.cpp
 * @author Hunter Johnson
 * @date 2022-03-16
 * @brief Employee managment system
 * 
 * accumulates, stores, and prints the data for the employees at a company
 */
#include <iostream>
#include "Supervisor.h"
#include "Officer.h"
using namespace std;


/**
 * Runs a test checking and printing out the information for an employee as well as ensuring that the functions and classes are working correctly
 *
 * @param Employee & e the object going into the function to be tested
 * @pre properly intialized object and call
 * @return void 
 * @post 
 * 
 */
void runEmployeeTests(Employee & e);

int main() {
  //Default Employee Tester
  cout << "Testing Employee default constructor:" << endl;
  Employee defaultE;
  runEmployeeTests(defaultE);
  cout << endl << endl;
  
  //Parameterized Employee Tester
  // ID: 1248, years: 2, hourlyRate: 15.23, hoursWorked: 3
  cout << "Testing Employee parameterized constructor:" << endl;
  Employee parameterizedE(1248, 2, 15.23, 3);
  runEmployeeTests(parameterizedE);
  cout << endl << endl;
  
  //Default Supervisor Tester
  cout << "Testing Supervisor default constructor:" << endl;
  Supervisor defaultS;
  runEmployeeTests(defaultS);
  cout << endl << endl;
  
  //Parameterized Supervisor Tester
  // ID: 422, years: 9, hourlyRate: 55.44, hoursWorked: 20, numSupervised 52
  cout << "Testing Supervisor parameterized constructor:" << endl;
  Supervisor parameterizedS(422, 9, 55.44, 20, 52);
  runEmployeeTests(parameterizedS);
  cout << endl << endl;
  
  //Default Officer Tester
  cout << "Testing Officer default constructor:" << endl;
  Officer defaultO;
  runEmployeeTests(defaultO);
  cout << endl << endl;
  
  //Parameterized Officer Tester
  // ID: 2, years = 94, hourlyRate: 10.859, hoursWorked: 2, evilness 9000.1
  cout << "Testing Officer parameterized constructor:" << endl;
  Officer parameterizedO(2, 94, 10.859, 2, 9000.1);
  runEmployeeTests(parameterizedO);

  return 0;
}

void runEmployeeTests(Employee &e) {
  cout << "Initial print():" << endl;
  e.print();
  cout << "Calculated Pay: " << e.calculatePay() << endl;
  cout << "Anniversary Test: ";
  e.anniversary();
  cout << "Final print():" << endl;
  e.print();
}
