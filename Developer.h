/*
 * Developer.h
 *
 *  Created on: 2016. dec. 16.
 *      Author: Tecra_Z50
 */

#ifndef DEVELOPER_H_
#define DEVELOPER_H_
#include <string>
#include "Employee.h"

using namespace std;

class Developer : public Employee {
public:
  Developer(string _employee_name);
  virtual ~Developer();
};

#endif /* DEVELOPER_H_ */
