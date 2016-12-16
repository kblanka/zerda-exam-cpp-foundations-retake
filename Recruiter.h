/*
 * Recruiter.h
 *
 *  Created on: 2016. dec. 16.
 *      Author: Tecra_Z50
 */

#ifndef RECRUITER_H_
#define RECRUITER_H_
#include <string>
#include "Employee.h"

using namespace std;

class Recruiter : public Employee {
public:
  Recruiter(string _employee_name);
  virtual ~Recruiter();
};

#endif /* RECRUITER_H_ */
