#include <stdio.h>
#include <stdlib.h>

unsigned long fib(int *operation, unsigned long n)
{
  unsigned long a = 1;  
  unsigned long b = 1; 
  unsigned long i;
  for (i = 3; i <= n; i++) {
    unsigned long c = a + b; a = b; b = c;
  }
  return b;
}

int main(int argc, char **argv)
{
  if (argc != 2) {
    printf("Give one argument!\n");
    abort();
  }

  int operation = -10;
  long n = strtol(argv[1], NULL, 10);
  unsigned long f = fib(&operation, n);
  printf("fib(%li) = %li\n", n, f);

  return 0;
}
