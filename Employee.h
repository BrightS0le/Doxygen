/**
 * @file Employee.h
 * @author Hunter Johnson
 * @date 2022-03-16
 * @brief The class structure for Employee
 * 
 * It is a class for an Employee Object for managing the employee data in a system
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <iomanip>

/**
 * The employee class
 *
 * @class Employee Employee.h "hw07-business-corp-employee-management-system-BrightS0le/Employee.h"
 * @brief Holds employee information
 *
 */
class Employee
{
 public:
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);

/**
 * Calculates the amount of money an employee will be paid
 *
 * @pre For it to run the employee must exist at the company, and have properly intialized horuly rate and hours worked
 * @return virtual returns pay for employee
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * Prints out the information for an employee in the designated format
 *
 * @pre Employee and it's variables exist and are properly intialized
 * @return virtual does not return anything 
 * @post 
 * 
 */
  virtual void print();

/**
 * prints out the aniversary statement for an employees year amount
 *
 * @pre variables exist and are intialized, properly called, etc. 
 * @return void 
 * @post modifies hourlyRate and year amount
 * 
 */
  void anniversary();
 private:
  int ID;
 protected:
  int years;
  double hourlyRate;
  float hoursWorked;
  double pay;
};
#endif //EMPLOYEE_H
