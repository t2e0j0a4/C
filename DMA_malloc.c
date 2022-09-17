// Let see the malloc() function in Dynamic Memory Allocation
/*
    malloc() is used to allocate memory . # as Needed
*/
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr;
    ptr = (int *)malloc(4 * sizeof(int));
    // printf("%d %d",sizeof(ptr),sizeof(int));
    
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the Element : ");
        scanf("%d", &ptr[i]);
    }

    // if we dont assign values then there exists some garbage values .
    
    for (int i = 0; i < 4; i++)
    {
        printf("The Element at %d is %d\n",i,ptr[i]);
    }

}