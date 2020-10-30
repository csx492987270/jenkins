#include <stdio.h>

int assign(int* a)
{
  return *a;  /* dereference a */
}

int test_uiv() {
  int a, b;
  b = assign(&a);  /* call assign with a uninitialized */
  printf("value of b = %d\n", b);
  return 0;
}

