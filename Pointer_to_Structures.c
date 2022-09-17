// Pointers to Structures
#include <stdio.h>

struct Employee{
    float Salary;
};

void main()
{
    struct Employee Teja;
    struct Employee* ptr;
    ptr = &Teja;
    (*ptr).Salary = 10000.45; //Dollors
    printf("The Salary is %f",ptr->Salary);  // Herr '->' is Arrow operator.
}