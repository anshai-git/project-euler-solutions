#include <stdio.h>
#include <stdbool.h>

int sum_even_fibonacci_until(int max);
void parse_number(int* into, char* from);
bool is_digit(char c);

int main(int argc, char** argv) {
  
  if (argc < 2) {
    printf("Invalid arguments.\n");
    printf("This program calculates the sum of even valued fibonacci numbers up to a max value.\n");
    printf("Usage: program <max value\n");

    return 1;
  }

  char* max = argv[1];

  int max_num = 0;
  parse_number(&max_num, max);

  int result = sum_even_fibonacci_until(max_num);

  printf("result: %d\n", result);

  return 0;
}

void parse_number(int* into, char* from) {
  while((*from != '\0')) {
    if(is_digit(*from)) {
      *into = *into * 10 + (*from) - '0';
    }
    from++;
  }
}

int sum_even_fibonacci_until(int max) {
  int last = 0;
  int current = 1;
  int sum = 0;

  while (current < max) {
    if (current % 2 == 0) {
      sum += current;
    }

    int temp = current;
    current += last;
    last = temp;
  }

  return sum;
}

bool is_digit(char c) {
  return c >= '0' && c <= '9';
}
