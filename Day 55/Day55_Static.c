
#include <stdio.h>

int ShivamCDAC(void)
{
    return 50;
}


int main()
{
   static int i = ShivamCDAC;
   printf("value of i = %d", i);
   return 0;
}
