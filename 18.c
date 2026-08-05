//palindrone or not
#include<stdio.h>
void main(){
    int n,rev=0,rem;
    scanf("%d",&n);
    int num=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }

    printf("REVERSE=%d\n",rev);
    
    if(rev==num)
    {
        printf("IS A PALINDRONE");
    }
    else
    {
        printf("NOT A PALINDRONE");
    }
    
}