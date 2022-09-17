// Structres
#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int r_no;
    char sec;
    int class;
};

void main()
{
    struct student s1 = {"Nagateja", 1, 'B', 10};
    // strcpy(s1.name, "Nagteja");  // Here '.' is a Dot Member.
    // s1.r_no = 63;
    // s1.sec = 'B';
    // s1.class = 10;

    printf("A Student named %s of Roll Number %d is from Section %c of Class %d",s1.name,s1.r_no,s1.sec,s1.class);
    
}