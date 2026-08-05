//count
#include<stdio.h>
void main(){
    int n,rem,c=0;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        c++;
        
        n=(n/10);
    }
    printf("%d",c);
}