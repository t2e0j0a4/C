// free() is used to deallocate the memory after its usage.
#include <stdio.h>
#include <stdlib.h>

void main()
{
    // lets us use malloc() take some memory to built an array . & Then we use free() to deallocate that memory.

    int *memory;
    memory = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Each integer to the Memory : ");
        scanf("%d", &memory[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", memory[i]);
    }
    free(memory); // It will desllocate the Memory.
    
    printf("\n%d", memory[0]); //Prints Garbage Value.
}