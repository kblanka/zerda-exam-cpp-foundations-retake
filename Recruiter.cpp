/*
 * Recruiter.cpp
 *
 *  Created on: 2016. dec. 16.
 *      Author: Tecra_Z50
 */

#include "Recruiter.h"

using namespace std;

Recruiter::Recruiter(string _employee_name) {
  employee_name = _employee_name;
  this->employee_type = "Recruiter";
  this->base_salary = 15;
  this->worked_hours = 0;
}

Recruiter::~Recruiter() {

}

