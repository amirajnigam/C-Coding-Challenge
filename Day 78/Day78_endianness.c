#include <stdio.h>

int main()
{
    int y = 0x12530001;
    printf("%X", (*(char*)&y));
}