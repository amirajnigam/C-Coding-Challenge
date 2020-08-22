#include <stdio.h>

int main()
{
    char c[] = "#SHIVAMCDAC";
    char *p;
    p= c;
    printf("%s %c", p, *(p + p[8] - p[7]));
    return 0;
}
