// day 3
//2nd smallest digit in number
#include<stdio.h>
int main(){
int s=10,ss=10,rem,n;
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
    if(rem<s)
    {
        ss=s;
        s=rem;
    }
    else if(rem<ss &&  rem!=s)
    {
        ss=rem;
    }
    n=n/10;
}
if(ss=10)
{
    printf("NONE");
}
else{
printf("SECOND SMALLEST =%d",ss);
}
return 0;
}