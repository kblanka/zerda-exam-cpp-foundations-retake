/*
 * Developer.cpp
 *
 *  Created on: 2016. dec. 16.
 *      Author: Tecra_Z50
 */
#include <string>
#include "Developer.h"

using namespace std;

Developer::Developer(string _employee_name) {
  employee_name = _employee_name;
  this->employee_type = "Developer";
  this->base_salary = 20;
  this->worked_hours = 0;
}

Developer::~Developer() {
}

