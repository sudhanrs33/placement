// move zeros to the end of the array
#include<stdio.h>
int main()
{
    int a[]={1,0,2,3,0,0,5};
    int n=sizeof(a)/sizeof(a[0]);
    int j=0,temp;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp =a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
      for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }



    return 0;
}

// 1 0 2 3 0 0 0 5
// i
// j

