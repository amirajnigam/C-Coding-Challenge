#include <stdio.h>
struct CDAC{
    int x=20;
    char y=c;
    float z=5.6;
};

int main()
{
    struct CDAC Shivam;
    printf("%f",Shivam.z);
    printf("%d", Shivam.x);
    return 0;
}
