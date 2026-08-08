// decimal to binary 
#include<stdio.h>
void main()
{
    int a[100];
    int n,j=0;
    
    scanf("%d",&n);
    while(n>0){
        a[j++]=n%2;
        n=n/2;
    }
    
    int temp;

    for(int i=0;i<j/2;i++)
    {
       temp=a[i];
       a[i]=a[j-i-1];
       a[j-i-1]=temp ;

    }

    for(int i=0;i<j;i++)
    {
        
       printf("%d",a[i]);
    }
}