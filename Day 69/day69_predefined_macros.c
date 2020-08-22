#include <stdio.h>

int main()
{
    printf("File: %s\n", __FILE__);
    printf("Func: %s\n", __func__);
    printf("Line: %d\n", __LINE__);
    printf("Time: %s\n", __TIME__);
    printf("Date: %s\n", __DATE__);
    return 0;
}
