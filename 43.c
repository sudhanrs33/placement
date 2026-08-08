//decimal to binary 
#include<stdio.h>
void main()
{
    int a[100];
    int n,bin=0,m=1;
    
    scanf("%d",&n);
    while(n>0){
        bin=bin+m*(n%2);
        n=n/2;
        m=m*10;
    }
printf("%d",bin);    
    
}