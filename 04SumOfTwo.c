/* 
Develop an algorithm that reads two integers and displays the sum between them.
Example:
Enter a value: 8
Enter another value: 5
The sum of 8 and 5 is equal to 13.
*/

#include <stdio.h>

void sumOfTwo() {
  int num1;
  int num2;
  int sum;

  printf("Enter a number: ");
  scanf("%d", &num1);

  printf("Enter another number: ");
  scanf("%d", &num2);

  sum = num1 + num2;

  printf("The sum between %d and %d is %d \n", num1, num2, sum);
}

void pressEntertoExit() {
   printf("Press Enter to exit...");
   getchar();
}

int main() {
  sumOfTwo();
  pressEntertoExit();
  return 0;
}