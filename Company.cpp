/*
 * Company.cpp
 *
 *  Created on: 2016. dec. 16.
 *      Author: Tecra_Z50
 */
#include <iostream>
#include <string>
#include <algorithm>
#include "ToString.h"
#include "Company.h"

using namespace std;

Company::Company(string company_name, unsigned int balance) {
  this->company_name = company_name;
  this->balance = balance;
}

void Company::add_employee(string employee_type, string _employee_name) throw (const char*) {
  if (employee_type == "Developer") {
    employee_vector.push_back(new Developer(_employee_name));
  }
  else if (employee_type == "Recruiter") {
    employee_vector.push_back(new Recruiter(_employee_name));
  }
  else {
    throw "We do not accept new candidates for this position.";
  }
}

int Company::add_revenue(unsigned int revenue) {
  return balance += revenue;
}

string Company::get_company_status() {
  string status = "";
  status =  "Company name: " + company_name + "\nBalance: " + ToString(balance) + "\nEmployee Count: "
      + ToString(employee_vector.size()) + "\nEmployees:" + "\n";
  for (unsigned int i = 0; i < employee_vector.size(); i++) {
    status += employee_vector[i]->get_status();
  }
  return status;
}

string Company::get_best_employees_name() {
  int result;
  for(unsigned int i = 0; i < employee_vector.size(); i++) {
     result = max_element( employee_vector.begin(), employee_vector.end() ) - employee_vector.begin();
  }
  return employee_vector[result]->get_name();
}

void Company::add_worked_hours(string working_employee_name, int add_worked_hours) {
  for (unsigned int i = 0; i < employee_vector.size(); i++) {
    if (employee_vector[i]->get_name() == working_employee_name) {
      employee_vector[i]->work(add_worked_hours);
    }
  }
}

void Company::give_bonuses(){
  for (unsigned int i = 0; i < employee_vector.size(); i++) {
    if (employee_vector[i]->get_worked_hours() >= 100) {
      employee_vector[i]->raise();
    }
  }
}

Company::~Company() {
  for (unsigned int i = 0; i < employee_vector.size(); i++) {
    delete employee_vector[i];
  }
}

