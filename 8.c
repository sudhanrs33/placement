//odd and even count
#include<stdio.h>
void main(){
    int n,e=0,o=0,rem;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        if(rem%2==0)
        {
            e++;
        }
        else{
            o++;
        }
        
        n=(n/10);
    }
    printf("%d\n",e);
    printf("%d",o);
}
