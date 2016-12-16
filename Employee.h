/*
 * Employee.h
 *
 *  Created on: 2016. dec. 16.
 *      Author: Tecra_Z50
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
#include <string>

using namespace std;

class Employee {
protected:
  string employee_name, employee_type;
  unsigned int base_salary, worked_hours;
public:
  Employee();
  string get_name();
  string get_status();
  int get_payment();
  int get_worked_hours();
  void raise() throw (const char*);
  void work(int add_working_hours) throw (const char*);
  virtual ~Employee();
};

#endif /* EMPLOYEE_H_ */
