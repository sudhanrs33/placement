
//square sum
#include<stdio.h>
int main(){
int sum=0,rem,n;
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
    sum=sum+rem*rem;
    n=n/10;
}
printf("%d",sum);

   
return 0;
}