//find the unique number
#include<stdio.h>
void main()
{
int n,unique; 
scanf("%d",&n); 
int rem=0;
while(n>0){
    rem=n%10;
    unique^=rem;
    n=n/10;


    }
    printf("%d\n",unique);
   
} 