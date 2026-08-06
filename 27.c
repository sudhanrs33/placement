#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    printf("%d ",a[i]);
}
return 0;
}