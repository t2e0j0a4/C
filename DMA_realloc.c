//  realloc() is used to reallocate the memory if needed or insufficient

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *ptr;
    ptr = (int *)calloc(10, sizeof(int));
    int reallocate;
    printf("The Size you want to reallocate to the ptr memory : ");
    scanf("%d", &reallocate);
    ptr = realloc(ptr, reallocate);
    for (int i = 0; i < reallocate; i++)
    {
        printf("Enter ptr Value at %d : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < reallocate; i++)
    {
        printf("The Element at %d is %d\n", i, ptr[i]);
    }
    free(ptr);
}