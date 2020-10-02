#include <stdio.h>

int main()
{
    char xyz[3][4] = {"shivam", "cdac", "embedded"};
    char (*ptr) = xyz;
    putchar(*(xyz[1] + 1));
    return 0;
}
