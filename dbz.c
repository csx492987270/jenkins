#include <stdio.h>

int test_dbz(int a, int guard)
{
    int x = 0;
    int result = 0;
    if (guard != 0)
      result = a / x;  
      /* did not check for zero */
    printf("result is %d", result);
    return 0;
}
