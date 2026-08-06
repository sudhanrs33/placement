//selctionsort
//works just like how human brain thinks

//6 9 3 7 2
//2 9 3 7 6
//2 3 9 7 6
//2 3 6 7 9
#include<stdio.h>
int main()
{
    int a[]={6,9,3,7,2};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("Sorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
      