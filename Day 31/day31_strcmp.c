#include<stdio.h>
#include<string.h>
int main()
{
    int val = 0;
    char str[] = "#ShivamCDAC";

    val = strcmp(str, "#shivamCDAC");
    printf("%d", val);
    return 0;
}