#include <stdio.h>

int test_wrf()
{
    /* file open for read */
    FILE *fp_open_readonly = fopen("/tmp/x", "r");

    if (fp_open_readonly != NULL) {
        /* writing to the file */
        fwrite("HELLO!", 1, 5, fp_open_readonly);
    }

    fclose(fp_open_readonly);
    
    return 0;
}
