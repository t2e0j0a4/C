#include <stdio.h>
struct Students{
    char name[30];
    int id;
};
void main()
{
    struct Students Bhashyam[10];
    int i;
    for (i=0;i<10;i++)
    {
        scanf("%s %d",&Bhashyam[i].name,&Bhashyam[i].id);
    }
    for (i=0;i<10;i++)
    {
        printf("Student Name : %s ; Roll Number : %d\n",Bhashyam[i].name,Bhashyam[i].id);
    }
}