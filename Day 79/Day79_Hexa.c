
#include <stdio.h>

int main()
{
    unsigned int x = ~((unsigned int)0xc5);
    printf("0x%x", x);
    return 0;
}