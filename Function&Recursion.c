#include<stdio.h>
void sum(); // Function Prototype
void change(); // Function Prototype

void main()
{
    // sum(); // Function Calling
    int a = 100;
    printf("%d\n",a);
    change(a);
    printf("%d\n",a);
}

void sum() // Function Definition
{
    int a,b;
    printf("Enter Two Number To Get Sum of Them : ");
    scanf("%d %d",&a,&b);
    printf("The Sum of %d and %d is %d\n",a,b,a+b);
}

void change(int a)
{
    a = 88;
    printf("%d\n",a);
}