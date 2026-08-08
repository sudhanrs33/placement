//reverse the string
#include<stdio.h>
void main()
{
    char a[]={'h','e','l','l','o'};
    int l=0;
    int r=(sizeof(a)/sizeof(a[0]))-1;
    while(l<r)
    {
        char temp=a[l];
        a[l]=a[r];
        a[r]=temp;   
    l++;
r--; }
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    printf("%c",a[i]);
}
    
}