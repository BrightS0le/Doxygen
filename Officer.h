/**
 * @file Officer.h
 * @author Hunter Johnson
 * @date 2022-03-16
 * @brief class header file for officer
 * 
 * class header file for officer
 */

#ifndef OFFICER_H
#define OFFICER_H
#include "Employee.h"

/**
 * a derived class of the employee class which adds the evilness variable 
 *
 * @class Officer Officer.h "hw07-business-corp-employee-management-system-BrightS0le/Officer.h"
 * @brief just adds the evilness variable
 *
 */
class Officer : public Employee
{
 public:
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);

/**
 * calculates the pay for an officer using same method as employee yet adding evilness to hourly rate
 *
 * @pre same old same old
 * @return double returns the officers pay
 * @post 
 * 
 */
  double calculatePay();

/**
 * prints out the information for an officer in the designated format
 *
 * @pre same old same old
 * @return void 
 * @post 
 * 
 */
  void print();
 private:
  double evilness;
};
#endif //OFFICER_H
