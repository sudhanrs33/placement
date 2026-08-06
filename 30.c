// sun is on the left side of the array how many will get sunlight
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    scanf("%d",&a[i]);
}
int c=0;
int le=0;
for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    if(le<a[i])
    {
        le=a[i];
        c++;
    }
}
printf("%d ",c);

return 0;
}