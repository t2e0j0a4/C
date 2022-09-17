#include <stdio.h>
void callByValue(int a,int b);     // Call by value
void callByReference(int*a,int*b); // Call by reference , Here we use Pointers

void main()
{
    int x, y;
    x = 110;
    y = 90;
    printf("The Values of x,y are %d,%d\n", x, y);
    callByValue(x, y);
    printf("The Values of x,y are %d,%d\n", x, y);
    callByReference(&x, &y);
    printf("The Values of x,y are %d,%d\n", x, y);
}

void callByValue(int a, int b)
{
    int c;
    c = a + b;
    a = 100;
    b = 200;
    printf("The Sum is %d\n", c);
}

void callByReference(int* a, int* b)
{
    int c = *a+*b;
    printf("The Sum is %d\n",c);
    scanf("%d %d",a,b); 
    // *a = 100;  // Changes value at Address of x to 100.
    // *b = 200;  // Changes value at Address of y to 200.
}