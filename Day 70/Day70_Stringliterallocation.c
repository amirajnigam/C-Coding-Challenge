#include <stdio.h>

int StringFunction()
{
    char* str2 = "#ShivamCDAC";
    printf("%p\n",str2);
}

int main()
{
    char *str1 = "#ShivamCDAC";
    printf("%s\n", str1);
    printf("%p\n",str1);
    StringFunction();
    return 0;
}
