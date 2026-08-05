// day 3
//sum of cubes of the digit
#include<stdio.h>
#include<math.h>
int main(){
int sum=0,rem,n;
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
    sum=sum+pow(rem,3);
    n=n/10;
}
printf("%d",sum);
return 0;
}