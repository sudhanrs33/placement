//array traversing
//leader number(number graeter than right side ka part)
#include<stdio.h>
int main(){
    int a[]={1,9,3,5,2,7,4};
    int l=sizeof(a)/sizeof(a[0]);
    int le=a[l-1];
    printf("%d",le);
    for(int i=l-2;i>=0;i--){
            if(le<a[i])
            {
                le=a[i];
                printf("%d ",le);
            }
            
        
    }
    
}