// find the sum of the string
#include<stdio.h>
#include<string.h>
void main()
{
    char str[100]="876423";
    int l=strlen(str);
    int n,sum=0;

    for(int i=0;i<strlen(str);i++)
    {
        n=str[i]-'0';
        sum+=n;
    }
    printf("The sum of the string is: %d",sum);
}