#include<stdio.h>
void main()
{
    char str[10];
    int i,ccount = 0,vcount = 0;
    printf("Enter the sring:---");
    scanf("%s",str);
    for (i=0; i<str[i]; i++)
    {
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
            vcount++;
        else if(str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
            vcount++;
        else
            ccount++; 
    }
    printf("Number of consonants = %d",ccount);
    printf("\nNumber of vowels = %d",vcount);
}