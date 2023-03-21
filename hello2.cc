#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int main() {
  int a = 2;
  int b = 3;
  int result = add(a, b);
  printf("The sum of %d and %d is %d\\n", a, b, result);
  return 0;
}
