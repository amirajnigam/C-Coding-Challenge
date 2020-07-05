#include<stdio.h>
int main()
{
    union values
    {
        int intVal;
        char chrVal[2];
    };
union values val;
val.chrVal[0] = 'A';
val.chrVal[1] = 'B';

printf("\n %c,%c, %d", val.chrVal[0], val.chrVal[1], val.intVal);
return 0;
}