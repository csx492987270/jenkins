#include <stdio.h>

int foo()
{
  int *c;
  return &c; //return a local address to caller
}

int test_ral()
{
    int *a;

    a = foo();

    printf("assigned value: %d", a);

    return 0;

}