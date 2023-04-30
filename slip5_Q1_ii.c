#include<stdio.h>
#include<string.h>
void main()
{
    char str1[50],str2[50];
    printf("Enter string one\t");
    scanf("%s",str1);
    printf("Enter string two\t");
    scanf("%s",str2);
    printf("String before copying\n");
    printf("string 1%s\n",str1);
    printf("string 2%s\n",str2);

    printf("String after copying\n");
    strcpy(str1,str2);
    printf("string 1%s\n",str1);
    printf("string 2%s\n",str2);

}
