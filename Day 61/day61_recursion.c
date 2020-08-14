#include <stdio.h>

void ShivamCDAC(int n)
{
    if(n <= 1)
    {
        printf("%d", n);
    }
    else
    {
        ShivamCDAC(n/2);
        printf("%d", n%2);
    }
        
}


int main()
{
    ShivamCDAC(20);

    return 0;
}