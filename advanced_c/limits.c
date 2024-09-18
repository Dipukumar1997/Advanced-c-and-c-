#include <limits.h>
#include <stdio.h>

// command-line arguments are in main()

int main (int argc, char *argv[]) 
{
  int x;
  x = INT_MAX;
  printf("INT_MAX  = %d\n", x);
  x = INT_MIN;
  printf("INT_MIN  = %d\n", x);
  x = -x;
  printf("-INT_MIN = %d\n", x);
  return 0;
}