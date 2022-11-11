/**
 * @file Employee.cpp
 * @author Hunter Johnson
 * @date 2022-03-16
 * @brief holds all the function defintions for the employee class
 * 
 * the employee class function definition folder
 */

#include "Employee.h"
using namespace std;

Employee::Employee()
{
  ID = -1;
  years = -1;
  hourlyRate = -1;
  hoursWorked = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked)
{
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

double Employee::calculatePay()
{
  pay = hourlyRate * hoursWorked;
  return pay;
}

void Employee::print()
{
  cout << "Printing information for employee " << ID << ":" << endl;
  cout << " Years Employed: " << years << endl;
  cout << " Hourly Rate: " << hourlyRate << endl;
  cout << " Hours Worked: " << hoursWorked << endl;
}

void Employee::anniversary()
{
  years++;
  hourlyRate = hourlyRate * 1.002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!" << endl;
}
