// Pointers

#include <stdio.h>
void main()
{
    int a;
    a = 100;
    int* p = &a;  // Here & is the Address of Operator
    // To print Value --> All prints Same ----> 100
    printf("%d\n",a);
    printf("%d\n",*p);  // Here * is the Value at Address of Operator.
    printf("%d\n",*&a); 
    // To print the Address of a -->
    printf("The Address is %p which is same as %u\n",p,p);
    printf("The Address is %p which is same as %u\n",&a,&a);
    
    int** q;  //pointer to pointers
    q = &p;
    printf("The Value of Pointer of Pointer is %p\t%u\n",*q);
    printf("The Value of Pointer of Pointer is %p\t%u\n",q);
    // Address
    printf("The Address Where q is Stored is %p\t%u\n",&q);
    
}