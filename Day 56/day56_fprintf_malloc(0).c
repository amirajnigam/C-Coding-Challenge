#include <stdio.h>

int main()
{
    int *piBuffer = NULL;
    piBuffer = malloc(0);
    if(piBuffer == NULL)
    {
        fprintf(stderr, "Out of memory!\n");
        exit(1);
    }
    *piBuffer = 10;
    printf("#ShivamCDAC %d \n", *piBuffer);
    free(piBuffer);
    return 0;
}