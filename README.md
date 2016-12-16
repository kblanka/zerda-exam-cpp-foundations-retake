# Zerda C++ Foundation Exam Retake

## Employees and Company
### Aircrafts
Create a class that represents an employee

There are 2 types of employees: Developer and Recruiter

Both employees should store their name, base_salary (that they earn in every hour), and the hours they worked

#### Developer
 - Base Salary: 20 usd in every hour

#### Recruiter
 - Base Salary: 15 usd in every hour

All the employee types should take the name as a parameter in their constructors

Methods:

#### raise
It should raise the base salaries by 5 usd for the developers and 4 usd for the recruiters

#### work
It should take a number as an argument and increment the worked hours with it. It should
throw an exception if the argument is less than 4.

#### pay
It should set the worked hours to zero than it should return the required total salary
(multiply the base salary with the worked hours)

#### get_worked_hours
It should return how much hours the employee woked since the last pay

#### get_name
It should return the name of the employee

#### get_status
It should return it's status as string like: `Name: John Doe, Woked Hours: 53, Base Salary: 25`

### Company
Create a class that represents a Company

The company should be able to store employees
(you can use the `std::vector`) It should store pointers to the employees
Each company should have a money balance
The inital balance should be given by a parameter in it's constructor

Methods:

#### add_employee
It should take a pointer to an employee and add it the the vector

#### add_revenue
It should take a number as an argument and top up the balance with it.

#### get_best_employees_name
It should return the name of the employee that has the most worked hours

#### give_bonuses
It should give a raise to each employee that has more work hour than 100

#### get_status
It should return it's status as a string like:
```
Balance: 5000
Employee count: 2
Employees:
Name: John Doe, Woked Hours: 53, Base Salary: 25
Name: Mary Jane, Woked Hours: 63, Base Salary: 30
```
