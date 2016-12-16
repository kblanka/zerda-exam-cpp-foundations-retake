//============================================================================
// Name        : Employees_retake.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "Recruiter.h"
#include "Company.h"

using namespace std;

int main() {
  Developer new_employee("Aliz");
  new_employee.work(40);
  cout << new_employee.get_status() << endl;

  Company blue_bird("BlueBird", 10000);
  try {
    blue_bird.add_employee("Developer", "Joe");
    blue_bird.add_employee("Recruiter", "Liza");
    blue_bird.add_employee("Developer", "Anna");
    blue_bird.add_employee("Manager", "Jesse");
  }
  catch (const char* m) {
    cout << " <<< Recruitment process failed:" << m << " >>"<< endl;
  }
  blue_bird.add_revenue(2000);
  blue_bird.add_worked_hours("Liza", 40);
  cout << blue_bird.get_company_status();

	return 0;
}
