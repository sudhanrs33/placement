//odd and even sum
#include<stdio.h>
void main(){
    int n,e=0,o=0,rem;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        if(rem%2==0)
        {
            e=e+rem;
        }
        else{
            o=o+rem;
        }
        
        n=(n/10);
    }
    printf("%d\n",e);
    printf("%d",o);
}
