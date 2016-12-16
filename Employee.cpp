/*
 * Employee.cpp
 *
 *  Created on: 2016. dec. 16.
 *      Author: Tecra_Z50
 */
#include <string>
#include "Employee.h"
#include "ToString.h"

using namespace std;

Employee::Employee() {
  employee_type = "";
  employee_name = "";
  base_salary = 0;
  worked_hours = 0;
}

string Employee::get_name() {
  return employee_name;
}
string Employee::get_status() {
  return "Name: " + employee_name + ", Position: " + employee_type + ", Worked Hours: " +
      ToString(worked_hours) + ", Base Salary: " + ToString(base_salary) + "\n";
}

int Employee::get_payment() {
  int payment = base_salary * worked_hours;
  worked_hours = 0;
  return payment;
}

int Employee::get_worked_hours() {
  return worked_hours;
}

void Employee::raise() throw (const char*) {
  if (employee_type == "Developer")
    base_salary += 5;
  else if (employee_type == "Recruiter")
    base_salary += 4;
  else {
    throw "Salary raise available only for Developers and Recruiters.";
  }
}

void Employee::work(int add_working_hours) throw (const char*) {
  if (add_working_hours >= 4) {
    worked_hours += add_working_hours;
  }
  else {
    throw "Working hours does not reach the limit.";
  }
}

Employee::~Employee() {
}
