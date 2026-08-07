//reverse an array
#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int rev[10];
    int n=sizeof(a)/sizeof(a[0]);
    int k=2;
    for(int i=0;i<n;i++)
    {
       if (i+k<n)
       {
        rev[i+k]=a[i];
       }

       else
       {
        rev[i+k-n]=a[i]; // or rev[i+k%n]=a[i];
       }

    }
      for(int i=0;i<n;i++)
    {
        printf("%d",rev[i]);
    }



    return 0;
}