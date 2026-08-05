//smallest of the numbers
#include<stdio.h>
void main(){
    int n,small=9,rem;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        if(rem<small){
            small=rem;
        }
        
        n=n/10;
        
    }
    printf("%d\n",small);  
    
}
