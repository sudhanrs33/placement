// day 3
//2nd largest digit in number
#include<stdio.h>
int main(){
int l=-1,sl=-1,rem,n;
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
    if(rem>l)
    {
        sl=l;
        l=rem;
    }
    else if(rem>sl &&  rem!=l)
    {
        sl=rem;
    }
    n=n/10;
}
if(sl=-1)
{
    printf("NONE");
}
else{
printf("SECOND LARGEST =%d",sl);
}
return 0;
}