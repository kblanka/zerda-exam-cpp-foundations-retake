/*
 * Company.h
 *
 *  Created on: 2016. dec. 16.
 *      Author: Tecra_Z50
 */

#ifndef COMPANY_H_
#define COMPANY_H_
#include <vector>
#include "Developer.h"
#include "Recruiter.h"
using namespace std;

class Company {
protected:
  string company_name;
  vector<Employee*> employee_vector;
  unsigned int balance;
public:
  Company(string company_name, unsigned int balance);
  void add_employee(string employee_type, string _employee_name) throw (const char*);
  int add_revenue(unsigned int revenue);
  string get_company_status();
  string get_best_employees_name();
  void add_worked_hours(string working_employee_name, int add_worked_hours);
  void give_bonuses();
  virtual ~Company();
};

#endif /* COMPANY_H_ */


