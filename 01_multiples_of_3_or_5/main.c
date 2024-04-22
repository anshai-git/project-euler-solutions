#include "stdio.h"

int sum(int start, int end);

int main(int argc, int** argv) {
  int test = sum(1, 10);
  int result = sum(1, 1000);
  
  printf("test: %d\n", test);
  printf("result: %d\n", result);

  return 0;
}

int sum(int start, int end) {
  int sum = 0;
  for (int i = start; i < end; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  return sum;
}
