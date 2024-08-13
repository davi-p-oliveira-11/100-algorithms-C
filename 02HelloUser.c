/* 
02) Write a program that reads a person's name and displays a welcome message for them:
Example:
What's your name? João da Silva
Hello João da Silva, it's a pleasure to meet you!"
*/

#include <stdio.h>
#include <string.h>

void helloUser() {
  char name[20];

  printf("What is your name ? ");
  fgets(name, sizeof(name), stdin);

  name[strcspn(name, "\n")] = '\0';

  printf("Hello %s nice to meet you ! \n", name);
}

void pressEnterToExit() {
  printf("Press Enter to exit...");
  getchar();
}

int main() {
  helloUser();
  pressEnterToExit();
  return 0;
}