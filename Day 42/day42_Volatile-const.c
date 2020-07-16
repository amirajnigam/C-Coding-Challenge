
#include <stdio.h>

int main()
{
    int *const volatile p = 5;
    printf("%d\n", 5/2 + p);
    return 0;
}