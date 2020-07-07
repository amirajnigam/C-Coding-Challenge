#include <stdio.h>
char* Embedded(void)
{
    char str[] = "Hello";
    return str;
}

char* IoT(void)
{
    char *str= "Hello";
    return str;
}

int main()
{
    printf("%s,%s", Embedded(), IoT());
    return 0;
}