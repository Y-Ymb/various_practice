#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int i, j = 0, max;

  if (argc > 1) {
    max = atoi(argv[1]);
  }
  if (max == 0) max = 100;

  for (i = 0 ; i < max ; i++) {
    j += i * (max - i);
  }

  printf("i : %d, j : %d\n", i, j);
  return 1;
} 
