#include <stdio.h>

void print_hello_world(int number){
  char *c = "Hello World";
  printf("%s %d\n", c, number);
}

int main(void) {
  int a = 9;
  int *b = &a;
  print_hello_world(*b);
  return 0;
}
