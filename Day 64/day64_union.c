#include <stdio.h>

int main()
{
    union{
        char i1;
        int i2;
    }myVar = {.i2 = 100};
    
    printf("%c %d", myVar.i1, myVar.i2);
    return 0;
}