#include<stdio.h>
struct student
{
    int rno;
    char name[10];
}S;
void main()
{
    printf("Enter the rollno \t");
    scanf("%d",&S.rno);
    printf("Enter the name \t");
    scanf("%s",S.name);

    printf("\nSTUDENT DETAILS:----\n");
    printf("Rollno\tNAME\n");
    printf("%d\t%s",S.rno,S.name);
}
