#include<stdio.h>
int main(){
    int a[]={10,20,30,40,50};
    int l=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<l;i++){
        printf("%d ",a[i]);
    }
}