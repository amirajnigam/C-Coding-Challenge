#include <stdio.h>

void CDAC(int Shiv[])
{
    int loc_arr[3] = {6,7,8};
    Shiv = loc_arr;
    Shiv++;
    printf("%ld\n", Shiv[1]);
    printf("%ld\n", Shiv[2]);
}

int main()
{
    int Shivam[5] = {1,2,3,4,5};
    CDAC(Shivam);
}