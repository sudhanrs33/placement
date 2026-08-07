//eliminate the unique elements in an array using xor 
#include<stdio.h>
int main()
{
    int a[]={1,1,2,2,3,4,4,};
    int n=sizeof(a)/sizeof(a[0]);
    int u;

    for(int i=0;i<n;i++)
    {
        if(a[i]==-1) continue;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=-1;
            }
        }
    }
      for(int i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("%d",a[i]);
        }
    }



    return 0;
}

