//bubble  sort
#include<stdio.h>

int main()
{
    int a[]={6,9,3,7,2};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //6 9 3 7 2
    //6 3 9 7 2
    //6 3 7 9 2
    //6 3 7 2 9

    //3 6 7 2 9
    //3 6 2 7 9
    //3 2 6 7 9

    //2 3 6 7 9
    //2 3 6 7 9

    return 0;
}