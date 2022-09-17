// calloc() DMA

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int * ptr;
    ptr = (int *) calloc(4,sizeof(int));
    for (int i=0;i<4;i++)
    {
        printf("The Value is %d\n",ptr[i]);
        // Using calloc() because by default if you don't give any assignment there exist 0 to all.
    }
}