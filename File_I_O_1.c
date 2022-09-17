// File Input/Output

#include <stdio.h>
void main()
{
    FILE *file1;
    
    // Reading From File // Use modr "r".
    // file1 = fopen("New.txt", "r");
    // int num1,num2; // I Have Already Gave in New.txt
    // if (file1 == NULL)
    // {
    //     printf("The File Does not Exists !!");
    // }
    // else 
    // {
    //     fscanf(file1 ,"%d" ,&num1);
    //     fscanf(file1 ,"%d" ,&num2);
    // }

    // To Write in File 
    file1 = fopen("New.txt", "w");
    fprintf(file1 ,"\nThis Will Remove Existing and Prints Newly.");

    fclose(file1); 
    // printf("The First Number in File is : %d\n",num1);
    // printf("The Second Number in File is : %d\n",num2);
}