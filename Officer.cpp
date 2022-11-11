/**
 * @file Officer.cpp
 * @author Hunter Johnson
 * @date 2022-03-16
 * @brief officer header file function definition holder
 * 
 * holds the definitions for the functions in the officer header file
 */

#include "Officer.h"
using namespace std;

Officer::Officer()
{
  Employee();
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked)
{
  this->evilness = evilness;
}

double Officer::calculatePay()
{
  pay = (evilness + hourlyRate) * hoursWorked;
  return pay;
}

void Officer::print()
{
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}
