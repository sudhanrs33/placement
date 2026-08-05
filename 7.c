//mul of numbers
#include<stdio.h>
void main(){
    int n,s=1,rem;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        s=s*rem;
        n=(n/10);
    }
    printf("%d",s);
} 
