#include<stdio.h>
void main()
{
    int x,y,temp,*a,*b;
    printf("Enter any two numbers\t");
    scanf("%d%d",&x,&y);
    a=&x;
    b=&y;
    printf("x = %d\ny= %d",*a,*b);
    temp = *a;
    *a=*b;
    *b=temp;
    printf("\nx = %d\ny= %d",*a,*b);
}