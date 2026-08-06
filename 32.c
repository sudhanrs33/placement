#include<stdio.h>

int main()
{
    int a[]={6,9,4,5,3,7,2};
    int n = sizeof(a)/sizeof(a[0]);
    //left
    if(a[0] > a[1])
    {
        printf("%d ", a[0]);
    }
    //right
    if(a[n-1] > a[n-2])
    {
        printf("%d ", a[n-1]);
    }

    
    for(int i=1; i<n-1; i++)
    {
        if(a[i] > a[i-1] && a[i] > a[i+1])
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}