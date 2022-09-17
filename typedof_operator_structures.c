// Using typedof Operator
#include <stdio.h>

typedef struct Complex{   // Just typedef is used for alias name of This Full. 
    int real;
    int img;
} complexNo ;

void main()
{
    complexNo cn_1;
    cn_1.real = 3;
    cn_1.img = 2;
    printf("For the Complex Number cn_1 the Real Part is : %d ; Imaginary Part is  : %d\n", cn_1.real, cn_1.img);
}