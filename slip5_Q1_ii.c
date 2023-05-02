#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char str1[50],str2[50];
    printf("Enter string one\t");
    scanf("%s",str1);
    printf("Enter string two\t");
    scanf("%s",str2);

    i = strcmp(str1,str2);
    if(i==0)
        printf("BOTH STRINGS ARE EQUAL\n");
    else if(i>0)
        printf("STRING 2 ARE GREATER\n");
    else
        printf("STRING 1 IS GREATER\n");
    
    printf("String before copying\n");
    printf("string 1%s\n",str1);
    printf("string 2%s\n",str2);

    printf("String after copying\n");
    strcpy(str1,str2);
    printf("string 1%s\n",str1);
    printf("string 2%s\n",str2);


}
