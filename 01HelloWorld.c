/* 
1) Write a program that displays the message 'Hello, World!' on the screen."
*/

#include <stdio.h>

void helloworld() {
  printf("Hello World ! \n");
}

void pressEnterToExit() {
  printf("Press Enter to exit...");
  getchar();
}

int main() {
  helloworld();
  pressEnterToExit();
  return 0;
}