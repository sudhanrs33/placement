//reverse the array
#include<stdio.h>
void main()
{
    int a[100];
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;

    for(int i=0;i<n/2;i++)
    {
       temp=a[i];
       a[i]=a[n-i-1];
       a[n-i-1]=temp ;

    }

    for(int i=0;i<n;i++)
    {
        
       printf("%d",a[i]);
    }
}