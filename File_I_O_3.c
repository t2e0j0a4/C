#include <stdio.h>
void main()
{
    FILE *file;
    // file = fopen("LetusC.txt","w");
    // fprintf(file ,"This is a New File \n Namaste !!");
    // Read Each Character from File "LetusC.txt".
    // EOF = End of File . --> We Use
    char c = fgetc(file);
    while (c != EOF)
    {
        printf("Character is %c",c);
        c = fgetc(file);
    }
}