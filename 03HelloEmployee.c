/*
 3) Create a program that reads the name and salary of an employee, and displays
     a message at the end. For example:
     Employee Name: Maria do Carmo
     Salary: 1850.45
     The employee Maria do Carmo has a salary of $1850.45 in June.
*/

#include <stdio.h>
#include <string.h>

void helloEmployee() {
  char name[100];
  char salary[100];
  char month[100];

  printf("What is your name ? ");
  scanf("%99s", name);

  printf("What is the value of your salary ? ");
  scanf("%99s", salary);

  printf("what was the last month did you worked ? ");
  scanf("%99s", month);

  printf("The employee %s has a salary of %s in %s \n", name, salary, month );
 
}

void pressEntertoExit() {
  printf("Press Enter to exit...");
  getchar();
}

int main() {
  helloEmployee();
  pressEntertoExit();
  return 0;
}




