/**
 * @file Supervisor.h
 * @author Hunter Johnson
 * @date 2022-03-16
 * @brief the class header file for Supervisor a derived class of employee
 * 
 * same as brief
 */


#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include "Employee.h"

/**
 * A derived class of employee for a supervisor
 *
 * @class Supervisor Supervisor.h "hw07-business-corp-employee-management-system-BrightS0le/Supervisor.h"
 * @brief holds an extra variable and pay is calculated diffrently
 *
 */
class Supervisor : public Employee
{
 public:
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);

/**
 * calculates the pay for a supervisor and increases it based on the number of employees supervised
 *
 * @pre variables exist and are intialized, properly called
 * @return double returns the pay for a supervisor
 * @post 
 * 
 */
  double calculatePay();

/**
 * prints out the information for a supervisor using the designated format
 *
 * @pre properly called, etc. 
 * @return void 
 * @post 
 * 
 */
  void print();
 private:
  int numSupervised;
};
#endif //SUPERVISOR_H
