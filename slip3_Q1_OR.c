#include<stdio.h>
struct person
{
    char name[20];
    char add[50];
    struct birthdate
    {
        int day;
        int month;
        int year;
    }D;
}P;
void main()
{
    printf("Enter name \t");
    scanf("%s",P.name);
    printf("\nEnter address \t");
    scanf("%s",P.add);
    printf("\nEnter DOB as DATE MONTH YEAR\t");
    scanf("%d\n%d\n%d",&P.D.day,&P.D.month,&P.D.year);
    printf("DETAILS------\n");
    printf("NAME:- %s\n",P.name);
    printf("ADDRESS:- %s\n",P.add);
    printf("DATE OF BIRTH:- %d/%d/%d",P.D.day,P.D.month,P.D.year);
}
