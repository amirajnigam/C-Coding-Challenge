#include <stdio.h>
union CDAC{
             int a:2;
    unsigned int b:3;
};

int main()
{
    union CDAC Shivam;
    Shivam.a = 3;
    printf("%d \n",Shivam.a);
    Shivam.b = 5;
    printf("%d \n",Shivam.b);
    return 0;
}
