#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("Demo.txt", "w");
    // "To Print a Character in the File"
    fputc('c', ptr);
    fputc('c', ptr);
    fputc('c', ptr);

    fclose(ptr);
}