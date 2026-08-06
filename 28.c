//to find the largest number in an array
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];

for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
    scanf("%d",&a[i]);
}
int b=a[n-1];


for(int i=0;i<sizeof(a)/sizeof(a[0]);i++)
{
   if(a[i]>b)
   {
       b=a[i];
   }
}
printf("%d",b);
return 0;
}

