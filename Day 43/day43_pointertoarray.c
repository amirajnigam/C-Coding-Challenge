
#include <stdio.h>

int main()
{
    int Shivam[][3] = {1,2,3,4,5,6};
    int (*CDAC)[4] = Shivam;
    printf("%d %d\n", (*CDAC)[1], (*CDAC)[2]);
    ++CDAC;
    printf("%d %d\n", (*CDAC)[1], (*CDAC)[4]);
    return 0;
}
