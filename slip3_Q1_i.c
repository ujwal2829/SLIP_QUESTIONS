#include<stdio.h>
int main(int argc, int *argv[])
{
    int a,b,c;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = a+b;
    printf("Sum = %d",c);
}