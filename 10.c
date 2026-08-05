//largest of the numbers
#include<stdio.h>
void main(){
    int n,large=-1,rem;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        if(rem>large){
            large=rem;
        }
        
        n=n/10;
        
    }
    printf("%d\n",large);  
    
}
