// Recursion

// Factorial of a Number using Recursion

#include<stdio.h>
#include<math.h>

int factorial(); //Function for Recursion Usage in Factorial of a Number prototype.
int sum(); //Function for Recursion Usage in Sum of n Numbers prototype.
int product(); //Function for Recursion Usage in Product of n Numbers prototype.

void main()
{
    int x;
    printf("Enter a Number to get Factorial : ");
    scanf("%d", &x);
    printf("The Factorial of %d is %d",x,factorial(x));

    int num;
    printf("Get a Sum till number : ");
    scanf("%d", &num);
    printf("The Sum of Numbers till %d is %d",num,sum(num));

    int number;
    printf("Get Product till number : ");
    scanf("%d", &number);
    printf("The Product of Numbers till %d is %d", number, product(number));
}

int factorial(int a)
{
    if (a == 1 || a == 0)
    {
        return 1;  // if a is 1 or a is 0 then function will return 1 and terminates.
    }
    return a * factorial(a-1);
}

int sum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num + sum(num-1);
}

int product(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num*product(num-1);
}