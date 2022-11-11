/**
 * @file Supervisor.cpp
 * @author Hunter Johnson
 * @date 2022-03-16
 * @brief supervisor functions
 * 
 * holds the definitions for the functions in the supervisor header file
 */

#include "Supervisor.h"
using namespace std;
Supervisor::Supervisor()
{
  Employee();
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked)
{
  this->numSupervised = numSupervised;
}

double Supervisor::calculatePay()
{
  Employee::calculatePay();
  pay = (1 + (numSupervised * 0.01)) * pay;
  return pay;
}

void Supervisor::print()
{
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}

